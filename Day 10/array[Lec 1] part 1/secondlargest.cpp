// Brute force
// TC - O(n log n) + O(n)

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    int largest = a[n-1];
    int slargest;

    for(int i =n-2; i>=0; i--){
        if(a[i]!= largest){
            slargest = a[i];
            break;
        }
    }
    return slargest;
}

// Better approach
// TC - O(2n)

vector<int> getSecondOrderElements(int n, vector<int> a){

    int largest = a[0];
    int slargest = -1;

    for(int i=0; i<n; i++){
        if(a[i] > largest){
            largest = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] > largest){
            slargest = a[i];
        }
    }
    return slargest;
}

// Optimal approach
// TC - O(n)

vector<int> getSecondOrderElements(int n, vector<int> a){

    int largest=a[0];
    int slargest = -1;

    for(int i =0; i<n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > largest){
            slargest = a[i];
        }
    }
    return slargest;
}