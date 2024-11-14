//User function Template for C++

class Solution{
public:
    void Heapify(vector<int> &arr,int i,int n){
        int left_child=2*i+1;
        int right_child=2*i+2;
        int parent=i;
            
        if(left_child <n && arr[left_child]>arr[parent]){
           parent=left_child;
        }
        if(right_child<n && arr[right_child]>arr[parent]){
            parent=right_child;
        }
        if(parent!=i){
            swap(arr[parent],arr[i]);
            Heapify(arr,parent,n);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int N){
        for(int i=N-1/2;i>=0;i--){
            Heapify(arr,i,N);
        }
    }
    
};