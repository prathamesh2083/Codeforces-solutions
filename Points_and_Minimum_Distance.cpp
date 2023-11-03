 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{

  ll n;
  cin>>n;
  vector<ll>v(2*n);
  for(ll i=0;i<2*n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  ll i=n-1,j=n;
  vector<pair<ll,ll>>ans;
  ll sum=0;
  while(i>=0){
   ans.push_back({v[i],v[j]});
   
    i--;
    j++;
  }
  for(ll i=1;i<ans.size();i++){
    sum += abs(ans[i].first - ans[i - 1].first) + abs(ans[i].second - ans[i - 1].second);
  }
  cout<<sum<<endl;
  for (ll i = 0; i < ans.size(); i++)
  {
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
  }
  
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll psp;
  cin >> psp;   
  while (psp--)
    solve();

  return 0;
}
