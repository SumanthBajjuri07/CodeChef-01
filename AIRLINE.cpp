


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,a,b,c,d,e;
	cin>>t;
	for(i=0; i<t; i++){
	    cin>>a>>b>>c>>d>>e;
	    if((a+b<=d && c<=e) || (a+c<=d && b<=e) || (c+b<=d && a<=e)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
