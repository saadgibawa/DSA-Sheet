/*

Pattern 6:-

1 2 3
1 2
1

*/

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i =0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}