
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  vector<ll> tmp(n + 1, 0);
  vector<ll> ans(n, 0);
  ll no = -1;
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
    tmp[v[i]] = 1;
  }
  for (ll i = 0; i < n + 1; i++)
  {
    if (tmp[i] == 0)
    {
      no = i;
      break;
    }
  }

  tmp[0] = no;
  for (ll i = 1; i < n + 1; i++)
  {
    tmp[i] = v[i - 1];
  }

    ll rem = (k) % (n + 1);

  if (rem == 0)
  {
    ans = v;
  }
  else
  {
    ll ind = (n + 1) - (rem - 1);

    if (rem == 1)
    {
      ind = 0;
    }
    ll x = 0;
    ans[x++] = tmp[ind];
    for (x; x < n; x++)
    {
      ans[x] = tmp[(ind + 1) % (n + 1)];
      ind++;
    }
  }
  for (ll i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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
