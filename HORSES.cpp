

#include <iostream>
using namespace std;

int main() {
	int T,N,j,k,x,m,s[5000];
	cin>>T;
	while(T--)
	{cin>>N;
	
	    for( j=0;j<N;j++)
	    {
	        cin>>s[j];
	    }
	
	    m=s[0]-s[1];
	    
	    if(m<0)
	    {
	        m=-m;
	    }
	        for(j=0;j<N;j++)
	            {for(k=j+1;k<N;k++)
	                {x=s[j]-s[k];
	                    if(x<0)
	                    {x=-x;}
                	m=min(x,m);
	                }
        	    }
	
	cout<<m<<endl;
	}
	return 0;
}
