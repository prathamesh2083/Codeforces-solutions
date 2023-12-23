#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
  string s;
  cin >> s;
  ll n = s.length();
  ll plus = 0, minus = 0;
  for (ll i = 0; i < n; i++)
  {
    if (s[i] == '-')
    {
      minus++;
    }
    else
    {
      plus++;
    }
  }
  if (plus == n)
  {
    cout << n << endl;
    return;
  }
  if (minus == n)
  {
    cout << (n * (n + 1) / 2) + n << endl;
    return;
  }
  vector<ll> track(n, 0);
  if (s[0] == '+')
  {
    track[0] = 1;
  }
  else
  {
    track[0] = -1;
  }
  for (ll i = 1; i < n; i++)
  {
    if (s[i] == '+')
    {
      track[i] = track[i - 1] + 1;
    }
    else
    {
      track[i] = track[i - 1] - 1;
    }
  }
  ll ans = 0;
  ll rem = -1;
  for (ll i = 0; i < n; i++)
  {
    if (track[i] == rem)
    {
      ans += i + 1;
      rem--;
    }
  }

  cout << ans + n << endl;
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
