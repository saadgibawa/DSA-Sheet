/*

Pattern 9:-

  *
 ***
*****
*****
 ***
  *

*/

void nStarDiamond(int n) {
    // Write your code here.
      for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int j=0; j<2*i-1; j++){
            cout << "*";
        }
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        int stars = 2*n-(2*i+1);
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
     }
    }