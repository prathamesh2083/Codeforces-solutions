
#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
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

ll power(ll a, ll b)
{
  if (b == 0)
  {
    return 1;
  }
  if (b % 2 == 0)
  {
    ll t = power(a, b / 2);
    return t * 1LL * t;
  }
  else
  {
    ll t = power(a, b / 2);
    return t * 1LL * t * a;
  }
  return 0;
}
void solve()
{

  ll n;
  cin >> n;
  vector<ll> v(n);
  takeinput(v, n);
  ll i = 0, j = n - 1;
  ll alice = 0, bob = 0;
  ll pbob = 0, palice = 0, k = 0;
  for (k = 0; i <= j; k++)
  {                                  
    if (k % 2 == 0)
    {
      // alice turn
      palice = 0;
      while (i <= j && palice <= pbob)
      {
        alice += v[i];
        palice += v[i];
        i++;
      }
    }
    else
    {
      // bob turn
      pbob = 0;
      while (j >= i && palice >= pbob)
      {
        bob += v[j];
        pbob += v[j];
        j--;
      }
    }
  }
  cout << k << " " << alice << " " << bob << endl;
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
