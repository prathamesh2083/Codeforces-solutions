

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
    string s;
    cin >> s;

    ll ans = 0;

    vector<ll> next(n, n);
    if (s[n - 1] == '1')
    {
        next[n - 1] = n - 1;
    }
    else
    {
        next[n - 1] = -1;
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            next[i] = next[i + 1];
        }
        else
        {
            next[i] = i;
        }
    }
    ll back = -1;
    for (ll i = 0; i < n; i++)
    {

        if (s[i] == '1')
        {
            back = i;

            continue;
        }
        else if (back == -1)
        {
            if (next[i] == -1 || next[i] - i > k)
            {
                back = i;

                ans++;
            }
        }
        else
        {
            if (i - back > k && (next[i] - i > k || next[i] == -1))
            {
                back = i;

                ans++;
            }
        }
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
