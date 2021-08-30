
#include<bits/stdc++.h>
using namespace std;

int main() {
	string str; cin>>str;
	int n; cin>>n;
	
	while(n--){
	    string s1; cin>>s1;
	    int count=0;
	    
	    for(int i=0;i<s1.size();i++){
	       for(int j=0;j<str.size();j++){
	          if(s1[i]==str[j])
	          count++;
	       }
	    }
	    
	    if(count==s1.size())
	      cout<<"Yes\n";
	    else
	      cout<<"No\n";
	}
	return 0;
}
