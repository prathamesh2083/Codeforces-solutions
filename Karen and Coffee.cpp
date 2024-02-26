#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
typedef long long ll;
#define pb push_back
#define ca "YES\n"
#define wa "NO\n"

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll sz = 2 * 1e6 + 20;
    vector<ll> v(sz, 0);
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }
    for (ll i = 1; i < sz; i++)
    {
        v[i] += v[i - 1];
    }
    for (ll i = 1; i < sz; i++)
    {
        v[i] = v[i] >= k ? 1 : 0;
    }
    for (ll i = 1; i < sz; i++)
    {
        v[i] += v[i - 1];
    }
    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
