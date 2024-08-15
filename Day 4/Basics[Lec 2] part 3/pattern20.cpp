/*

Pattern 20:-

*         *
* *     * *
* * * * * *
* *     * *
*         *

*/

void symmetry(int n) {
    // Write your code here.
    for(int i=0; i<n;i++){
      for (int j = 0; j <= i; j++) {
        cout << "* ";
      }
      for(int j=0; j< (n+1)-2*i; j++){
          cout << " ";
      }
      for (int j = 0; j <= i; j++) {
        cout << "* ";
      }
      cout<< endl; 
    }
  for(int i=1; i<n;i++){
    for(int j=0; j<n-i; j++){
      cout << "* ";
    }
    for(int j=0; j< 2*i; j++){
      cout << " ";
    }
    for(int j=0; j<n-i; j++){
      cout << "* ";
    }
    cout << endl;
  }
}