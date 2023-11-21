
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
  ll n;
  cin >> n;
  vector<vector<ll>> v(2, vector<ll>(n));
  
  for (ll i = 0; i < 2; i++)
  {
    for (ll j = 0; j < n; j++)
    {
      cin >> v[i][j];
    }
  }
  vector<ll> lef(n, 0), rig(n, 0);
  rig[n - 1] = v[0][n - 1];
  lef[0] = v[1][0];
  for (ll i = 1; i < n; i++)
  {
    lef[i] = lef[i - 1] + v[1][i];
  }
  for (ll i = n - 2; i >= 0; i--)
  {
    rig[i] = rig[i + 1] + v[0][i];
  }

  ll ans = INT_MAX;
  for (ll i = 1; i < n - 1; i++)
  {
    ans = min(ans, max(lef[i - 1], rig[i + 1]));
  }
  ans = min(ans, lef[n - 2]);
  ans = min(ans, rig[1]);
  if (n == 1)
  {
    ans = 0;
  }
  cout << ans << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll psp;
  cin >> psp;
  while (psp--)
    solve();

  return 0;
}
