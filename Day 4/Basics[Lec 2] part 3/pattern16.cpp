/*

Pattern 16:-

A
B B
C C C
D D D D

*/

void alphaRamp(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        char c= 'A'+i;
        for(int j=0; j<=i; j++){
            cout<<c<< " ";
        }
        cout << endl;
    }
}
