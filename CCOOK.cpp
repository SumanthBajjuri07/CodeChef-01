

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum;
	cin>>n;
	while(n--){
	int a1,a2,a3,a4,a5;

	cin>>a1>>a2>>a3>>a4>>a5;
	sum = a1+a2+a3+a4+a5;
	if(sum==0)
	{
	    cout<<"Beginner"<<endl;
	}
	else if (sum==1)
	{
	    cout<<"Junior Developer"<<endl;
	}
	else if (sum==2)
	{
	    cout<<"Middle Developer"<<endl;
	}
	else if (sum==3)
	{
	    cout<<"Senior Developer"<<endl;
	}
	else if (sum==4)
	{
	    cout<<"Hacker"<<endl;
	}
	else if (sum==5)
	{
	    cout<<"Jeff Dean"<<endl;
	}
	
	}
	return 0;
}
