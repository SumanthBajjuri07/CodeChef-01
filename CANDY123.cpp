


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i=1;
        cin>>a>>b;
      while(a>=-1 && b>=-1)
      {
          a-=(2*i-1);
          if(a<0)
          {
              cout<<"Bob"<<endl;
              break;
          }
          b-=(2*i);
          if(b<0)
          {
              cout<<"Limak"<<endl;
              break;
          }
          i++;
      }
    }
return 0;
}
