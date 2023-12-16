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
  vector<ll> v(n), tmp;
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  tmp = v;
  v[0] = 0;
  for (ll i = 1; i < n - 1; i++)
  {
    if (tmp[i] > tmp[i + 1] && tmp[i] > tmp[i - 1])
    {
      v[i] = v[i - 1] + 1;
    }
    else
    {
      v[i] = v[i - 1];
    }
  }
  v[n - 1] = v[n - 2];

  ll peaks = 0, left = 0;

  for (ll i = 0; i <= n - k; i++)
  {
    ll next = i + k - 1;
    ll cnt = v[next - 1] - v[i];
    if (cnt > peaks)
    {
      left = i;
      peaks = cnt;
    }
  }
  cout << peaks + 1 << " " << left + 1 << endl;
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
