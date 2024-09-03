/*

Pattern 10:-

*
**
***
**
*

*/

void nStarTriangle(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl; 
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<(n-1)-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
