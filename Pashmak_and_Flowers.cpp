
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void takeinput(vector<ll> &v, ll n)
{
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
}


void solve()
{
ll n;
cin>>n;
vector<ll>v(n);
takeinput(v,n);
sort(v.begin(),v.end());
ll sm=v[0],lg=v[n-1];
ll diff=0,comb=0;
if(sm==lg){
  n--;
  comb=n*(n+1)/2;
  cout<<diff<<" "<<comb<<endl;
  return;
}
ll smcount=0,lgcount=0;
for(ll i=0;i<n;i++){
  if(v[i]==sm){
    smcount++;
  }
  if(v[i]==lg){
    lgcount++;
  }
}
diff=lg-sm;
comb=lgcount*smcount;
cout<<diff<<" "<<comb<<endl;
 
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

//   ll t;
//   cin >> t;
//  while (t--)
    solve();

  return 0;
}
