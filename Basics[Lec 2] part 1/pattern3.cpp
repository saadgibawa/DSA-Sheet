/*

Pattern 3:-

1
1 2 
1 2 3

*/

void nTriangle(int n) {
	// Write your code here
	for(int i=1; i<=n; i++){
		for(int j = 1; j<=i; j++){
			cout<< j << " ";
		}
		cout << endl;
	}
}