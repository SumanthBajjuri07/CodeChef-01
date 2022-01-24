

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{ int N;
	cin>>N;
	    string S;
	    cin>>S;
	    int c=0;
	    for(int i=0;i<N;i++)
	    {
	       
	        if(S[i]=='Y')
	        { c=1;
	       cout<<"NOT INDIAN"<<endl;
	       break;}
	        else if (S[i]=='I')
	  
	  { cout<<"INDIAN"<<endl;
	        
	    c=1;
	    break;}
	        
	        }
	    


	    if(c!=1) 
	    cout<<"NOT SURE"<<endl;
	}
	return 0;
}
