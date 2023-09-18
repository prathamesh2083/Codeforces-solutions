
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if (n % 2 == 1)
  {
    cout << "YES" << endl;  // if array length is odd then answer will be yes
    return;
  }
  
  // for even length
  for (ll i = 1; i < n - 1; i++)
  {
    ll diff = v[i - 1] - v[i];
    v[i] += diff;
    v[i + 1] += diff;
  }

  if (v[n - 2] <= v[n - 1])
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
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
