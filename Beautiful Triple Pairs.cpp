
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  vector<vector<ll>>vec(n-2);
  map<pair<ll,ll>,unordered_map<ll,ll>>ab,ac,bc;
  for(ll i=0;i<n-2;i++){
    vec[i]={v[i],v[i+1],v[i+2]};
    ab[{v[i],v[i+1]}][v[i+2]]++;
    ac[{v[i],v[i+2]}][v[i+1]]++;
    bc[{v[i+1],v[i+2]}][v[i]]++;

  }
  ll ans=0;
  for(auto it=ab.begin();it!=ab.end();it++){
      if(it->second.size()>1){
        ll cnt=0;
        ll sum=0;
        for(auto it1=it->second.begin();it1!=it->second.end();it1++){
          cnt+=sum*it1->second;
          sum+=it1->second;
        }
        ans+=cnt;
      }
  }
  for(auto it=ac.begin();it!=ac.end();it++){
    if (it->second.size() > 1)
    {
      ll cnt = 0;
      ll sum = 0;
      for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++)
      {
        cnt += sum * it1->second;
        sum += it1->second;
      }
      ans += cnt;
    }
  }
  for(auto it=bc.begin();it!=bc.end();it++){
    if (it->second.size() > 1)
    {
      ll cnt = 0;
      ll sum = 0;
      for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++)
      {
        cnt += sum * it1->second;
        sum += it1->second;
      }
      ans += cnt;
    }
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
