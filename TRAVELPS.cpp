

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,x=0,y=0;
        cin>>n>>a>>b;
        char ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]=='0')
            {
                x=x+a;
            }
            else if(ar[i]=='1')
            {
                y=y+b;
            }    
        }
        cout<<x+y<<endl;
    }
    return 0;
}
