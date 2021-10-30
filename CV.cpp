


#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;cin>>t;
	while(t--){
	  ll n;cin>>n;
	  char a[n];
	  ll count=0;
	  for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(i>=1){
	      if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
	        if(a[i-1]=='a' || a[i-1]=='e' || a[i-1]=='i' || a[i-1]=='o' || a[i-1]=='u'){
	          continue;
	        }
	        else{
	          count++;
	        }
	      }
	    }
	  }
	  cout<<count<<endl;
	}
	
	return 0;
}
