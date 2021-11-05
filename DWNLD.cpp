


#include <iostream>
using namespace std;

int main() {
	int t, N;
	int T, D;
	int count, total;
	
	cin>>t;
	while(t--)
	{
	    cin>>N>>count;
	    total = 0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>T>>D;
	        while(T && count)
	        {
	            T--;
	            count--;
	        }
	            
	        total += T*D;
	    }
	    cout<<totalT<<endl;
	   
	}
	return 0;
}
