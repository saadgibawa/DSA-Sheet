/*

Pattern 12:-

1                         1
1 2                     2 1
1 2 3                 3 2 1
1 2 3 4             4 3 2 1
1 2 3 4 5         5 4 3 2 1
1 2 3 4 5 6     6 5 4 3 2 1
1 2 3 4 5 6 7 7 6 5 4 3 2 1  

*/

void numberCrown(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
      for(int j = 1; j <= i; j++) {
        cout << j << " ";
      }
      int space = 3*n-i;
      for(int j = 1; j < space; j++){
        cout << " ";
      }
      for (int j = 0; j<i; j++) {
        cout << i-j << " ";
      }
      cout << endl;
    }
}