/*

Pattern 5:-

* * *
* *
*

*/

void seeding(int n) {
	// Write your code here.
	for(int i = 0; i<n; i++){
		for(int j=0; j<n-i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}