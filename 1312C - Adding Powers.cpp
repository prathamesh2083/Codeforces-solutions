
// 7
// 5 1 2 3 4 5 5
// n<1e5
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{

  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  vector<ll> bit(60, 0);
  for (ll i = 0; i < n; i++)
  {
    if (v[i] == 0)
    {
      continue;
    }
    while (1)
    {
      ll mul = 1;
      ll p = 0;
      ll num = v[i];
      while (v[i] % k == 0)
      {
        mul *= k;
        v[i] /= k;
        p++;
      }

      bit[p]++;

      v[i] = num - mul;
      if (v[i] == 0)
      {
        break;
      }
      if (v[i] % k != 0 && v[i] != 1)
      {

        cout << "NO" << endl;
        return;
      }
    }
  }
  for (ll i = 0; i < 60; i++)
  {
    if (bit[i] > 1)
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
