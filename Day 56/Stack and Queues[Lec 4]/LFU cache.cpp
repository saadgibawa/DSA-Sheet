struct Node
{
    int key,value,cnt;
    Node *next;
    Node *prev;
    Node(int _key,int _value)
    {
        key=_key;
        value=_value;
        cnt=1;
    }
};

struct List
{
    int size;
    Node *head;
    Node *tail;
    List()
    {
        head= new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;
        size=0;
    }


    void addfront(Node *node)
    {
        Node *temp=head->next;
        node->next=temp;
        node->prev=head;
        head->next=node;
        temp->prev=node;
        size++;
    }

    void removenode(Node *delnode)
    {
        Node *delprev=delnode->prev;
        Node *delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
        size--;
    }
};


class LFUCache {
        map<int,Node*>keynode;
        map<int,List*>freqlistmap;
        int maxsizecache;
        int minfreq;
        int cursize;
public:
    LFUCache(int capacity) 
    {
        maxsizecache=capacity;
        minfreq=0;
        cursize=0;
       
        
    }
    void updatefreqlistmap(Node *node)
    {
        keynode.erase(node->key);
        freqlistmap[node->cnt]->removenode(node);
        if(node->cnt==minfreq and freqlistmap[node->cnt]->size==0)
        {
            minfreq++;
        }
        List *nexthigherfreqlist=new List();
        if(freqlistmap.find(node->cnt+1)!=freqlistmap.end())
        {
            nexthigherfreqlist=freqlistmap[node->cnt+1];
        }
        node->cnt+=1;
        nexthigherfreqlist->addfront(node);
        freqlistmap[node->cnt]=nexthigherfreqlist;
        keynode[node->key]=node;
    }
    
    int get(int key) 
    {
        if(keynode.find(key)!=keynode.end())
        {
            Node *node=keynode[key];
            int val=node->value;
            updatefreqlistmap(node);
            return val;
        }
        return -1;
        
    }
    
    void put(int key, int value) 
    {
        if(maxsizecache==0)
        return;
        if(keynode.find(key)!=keynode.end())
        {
            Node *node=keynode[key];
            node->value=value;
            updatefreqlistmap(node);
        }
        else
        {
            if(cursize==maxsizecache)
            {
                List *list=freqlistmap[minfreq];
                keynode.erase(list->tail->prev->key);
                freqlistmap[minfreq]->removenode(list->tail->prev);
                cursize--;
            }
            cursize++;
            minfreq=1;
            List *listfreq=new List();
            if(freqlistmap.find(minfreq)!=freqlistmap.end())
            {
                listfreq=freqlistmap[minfreq];
            }
            Node *node=new Node(key,value);
            listfreq->addfront(node);
            keynode[key]=node;
            freqlistmap[minfreq]=listfreq;
        }
        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */