/*

Pattern 15:-

A B C D E F G 
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A 


*/

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        for(char j='A'; j<'A'+(n-i); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}