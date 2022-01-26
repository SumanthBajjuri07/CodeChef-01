




#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int len[n];
    int rat[n];
    //Take input
    for(int i=1;i<=n;i++)
    {
        cin>>len[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>rat[i];
    }
 
 //Choose movie

  int maxlenrat=0;
  int  maxrat=0;
  int minindex=0;
  for(int i=1;i<=n;i++)
  {
    if(maxlenrat<(len[i]*rat[i]))
    {
        maxlenrat=(len[i]*rat[i]);
        maxrat=rat[i];
        minindex=i;
    }
    else if(maxlenrat==(len[i]*rat[i]))
    {
        if(maxrat==rat[i])
        {
            if(minindex>i)
            {
                maxlenrat=(len[i]*rat[i]);
                 maxrat=rat[i];
                 minindex=i;
            }
        }

        else if(maxrat<rat[i])
        {
             maxlenrat=(len[i]*rat[i]);
                 maxrat=rat[i];
                 minindex=i;
        }
    }
  }
  cout<<minindex<<endl;
    }
  return 0;
}
