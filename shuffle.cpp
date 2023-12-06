
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
    ll n, x, m;
    cin >> n >> x >> m;

    ll l = -1, r = -1;
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (l == -1)
        {
            if (x >= a && x <= b)
            {
                l = a;
                r = b;
            }
        }
        else
        {
            if (!((a < l && b < l) || (b > r && a > r)))
            {
                l = min(l, a);
                r = max(r, b);
            }
        }
    }
    cout << r - l + 1 << endl;
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
