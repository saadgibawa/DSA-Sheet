/*

Pattern 8:-

*****
 ***
  *

*/

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        int stars = 2*n-(2*i+1);
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}