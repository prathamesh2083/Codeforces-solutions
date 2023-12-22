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
  unordered_map<char, ll> mp;
  ll remain = 0;
  for (ll i = 0; i < n; i++)
  {
    if (mp[s[i]] == 1)
    {
      remain += 2;
      mp.clear();
    }
    else
    {
      mp[s[i]]++;
    }
  }
  cout << n - remain << endl;
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
