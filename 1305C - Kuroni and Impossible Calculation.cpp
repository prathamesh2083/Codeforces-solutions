
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordred_set;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if (n > m)
  {
    cout << 0 << endl;
  }
  else
  {
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = i + 1; j < n; j++)
      {
        ans = (ans * (abs(v[i] - v[j]) % m)) % m;
      }
    }
    cout << ans << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // ll t;
  // cin >> t;
  // while (t--)
  solve();

  return 0;
}
