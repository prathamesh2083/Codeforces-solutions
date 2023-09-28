
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
ll find(ll n,ll a,ll b,ll c,vector<ll>&dp){
  if(n==0){
    return 0;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  ll ans=INT_MIN;
  if(n-a>=0)
  ans=max(ans,1+find(n-a,a,b,c,dp));
  if (n - b >= 0)
  ans=max(ans,1+find(n-b,a,b,c,dp));
  if (n - c >= 0)
  ans=max(ans,1+find(n-c,a,b,c,dp));
  return dp[n]=ans;
}
void solve()
{
  ll n;
  cin>>n;
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans=0;
  vector<ll>dp(n+1,-1);
  cout<<find(n,a,b,c,dp)<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // ll t;
  // cin >> t;
 // while (t--)
    solve();

  return 0;
}
