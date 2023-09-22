
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
void solve(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  unordered_map<ll,ll>mp;
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i]<=n)
    mp[v[i]]++;
  }
  vector<ll> div(n+1,0);

  for(auto it=mp.begin();it!=mp.end();it++){
    for(ll j=it->first;j<=n;j+=it->first){
      div[j]+=it->second;
    }
  }
  ll ans=0;
  for(ll i=0;i<=n;i++){
     ans=max(ans,div[i]);
  }
  cout<<ans<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
