


#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
using namespace std;
int main()
{
fastread();
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll Pow2=1;
    while(n>=Pow2){
        Pow2=Pow2*2;
    }
    ll temp=Pow2/2;
    ll temp2=temp/2;
    //cout<<"n: "<<n<<" temp: "<<temp<<" temp2: "<<temp2<<"\n";
    if(n==1 || n==2){cout<<1<<"\n";}
    else if(n==3 || n==4){cout<<2<<"\n";}
    else{
        if(n==temp){
            ll ans=max((temp-temp2),(n-temp));
            cout<<ans<<"\n";
        }
        else{
            ll ans=max((temp-temp2),(n-temp)+1);
            cout<<ans<<"\n";
        }
        
    }
    
}
return 0;
}
