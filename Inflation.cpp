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
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  ll mx = *max_element(v.begin(), v.end());
  
  ll low = 0, mid,high=1e17;
  while (high>low )
  {
    mid = (low + high) / 2;
    bool satisfied = true;
    ll sum = v[0] + mid;
    for (ll i = 1; i < n; i++)
    {
      if (v[i] > (sum * k / 100))
      {
        satisfied = false;
        break;
      }
      sum += v[i];
    }
    if(satisfied){
      high=mid;
    }
    else{
      low=mid+1;
    }
  }
  
    cout<<low<<endl;
  
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
