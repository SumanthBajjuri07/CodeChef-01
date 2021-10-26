


#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;  cin>>t;
	while(t--)
	{
	  int m,x,y;
      cin>>m>>x>>y;
	  int p=x*y;
	  int a[m],b[101]={0};
	  for(int i=1;i<=m;i++){
	 
	      cin>>a[i];
	      for(int j=a[i]-p;j<=a[i]+p;j++)
	          if(j>0 && j<=100)  b[j]=1;
	  }
	  int c=0;
	  for(int i=1;i<=100;i++)
	  
	      if(b[i]==0) c++;
	  cout<<c<<endl;
	}
	return 0;
}
