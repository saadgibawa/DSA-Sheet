int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int i=0,j=0,c=0;
        bool flag;
        while(i<arr1.size() and j<arr2.size()){
            c++;
            if(arr1[i]>arr2[j]){
               j++; 
               flag=0;
            } 
            else{
                i++;
                flag=1;
            }
            if(c==k and flag==0) return arr2[j-1];
            else if(c==k and flag==1) return arr1[i-1];
        }
          while(i!=arr1.size()){
            c++;
            i++;
            if(c==k) return arr1[i-1];
        }  
            while(j!=arr2.size()){
            c++;
            j++;
            if(c==k) return arr2[j-1];
        }
        
        
    }