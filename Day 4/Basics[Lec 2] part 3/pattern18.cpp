/*

Pattern 18:-

C
C B 
C B A

*/

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        char c =('A'+ n-1);
        for(int j=0; j< i; j++){
            cout << c<< " ";
            c--;
        }
        cout << endl;
    }
}