


#include <iostream>
using namespace std;

int main() {
	// your code goes h
	int t;
	cin >> t;
	while(t--){
	     int a,b,c;
	     cin >> a >> b >> c;
	     if((a>b && b>c) ||(c>b && b>a)){
	          cout << b <<endl;
	     }
	     else if((b>a && a>c) || (c>a && a>b)){
	          cout << a <<endl;
	     }
	     else if((a>c && c>b) || (b>c && c>a)){
	          cout << c <<endl;
	     }

	}
	return 0;
	
	
}
