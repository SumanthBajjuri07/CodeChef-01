


#include <iostream>

#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost :: multiprecision;


using namespace std;

int main() {
  
     int t=0;
     
     cin >> t;
     while(t--){
          int n;
          cpp_int f;
          f=1;
          cin >> n;
          
          for(int i=1; i<=n; i++){
               f = f*i;
               
          }
          cout << f <<endl;

     }
	return 0;
}
