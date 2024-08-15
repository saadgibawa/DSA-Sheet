/*

Pattern 21:-

*****
*   *
*   *
*   *
*****

*/

void getStarPattern(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
          for (int j = 0; j < n; j++) {
            cout << "*";
          }
          cout << endl;
        }
        else{
            for(int j=0; j<1; j++){
                cout << "*";
            }
            for(int j=0; j<n-2; j++){
                cout << " ";
            }
            for(int j=0; j<1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}
