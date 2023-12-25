#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"


void solve()
{
  
 ll n,k;
 cin>>n>>k;
 vector<ll>v(n);
 vector<ll>bit(32,0);
 for(ll i=0;i<n;i++){
  cin>>v[i];
  for(ll j=0;j<=30;j++){
    if((1<<j)&v[i]){
      
      bit[j]++;
    }
  }
 }
 

 ll ans=0;
 ll ind=30;
 while( ind>=0){
  if(bit[ind]==n){
   
    ans = (ans | (1 << ind));
    ind--;
    continue;
  }
  if(k>=n-bit[ind]){
    //cout<<ind<<" ";
    ans=(ans | (1<<ind));
  k-=n-bit[ind];
  }
 
  
  ind--;
 }
 cout<<ans<<endl;
 
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  solve();

  return 0;
}
