////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 26;
int a[N], c;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll t, c;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      ll arr[n];
      map<ll,ll> mp;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         mp[arr[i]]++;
      }
      for (auto i:mp)
      {
         if ((i.second)%2 == 1)
         {
            cout << i.first << endl;
         }
         
      }
   }

   return 0;
}



