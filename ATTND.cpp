


#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string first[n],last[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>first[i]>>last[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int flag=0;
	        for(int j=0;j<n;j++)
	        {
	            if(first[i]==first[j] && i!=j)
	             flag=1;
	        }
	        if(flag)
	         cout<<first[i]<<" "<<last[i]<<"\n";
	        else
	         cout<<first[i]<<"\n";
	    }
	}
	return 0;
}
