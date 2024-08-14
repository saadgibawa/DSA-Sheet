/*

Pattern 14:-

A
A B
A B C 
A B C D
A B C D E
A B C D E F
A B C D E F G

*/

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}