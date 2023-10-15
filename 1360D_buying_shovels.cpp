
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
  ll lfact = 1;
  if (n <= k)
    lfact = max(lfact, n);
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      if (n / i <= k)
      {
        lfact = max(lfact, n / i);
      }
      if (i <= k)
        lfact = max(lfact, i);
    }
  }

  cout << n / lfact << endl;
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
