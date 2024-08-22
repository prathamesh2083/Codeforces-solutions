#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordred_set;
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

ll getres(ll l, ll r)
{
    if (l == r)
    {
        return 0;
    }
    cout << "? " << l << " " << r << endl;
    fflush(stdout);

    ll res;
    cin >> res;

    return res;
}
void solve()
{
    // 4 3 2 5 1
    ll n;
    cin >> n;
    ll low = 1, mid, high = n, ans = 0;
    ll res = getres(1, n);
    ll lres = 0, rres = 0;
    if (1 != res)
    {
        lres = getres(1, res);
    }
    if (res != n)
    {
        rres = getres(res, n);
    }

    
    if (lres == res)
    {
        low = 1, high = res;
        ans = low;
        while (high >= low)
        {
            mid = (low + high) / 2;

            ll ind = getres(mid, res);
            if (ind == res)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // cout<<"KK "<<low<<" "<<high<<endl;

        cout << "! " << ans << endl;
    }
    else
    {
        // 4 5 2 1  3

        low = res, high = n;
        ans = high;
        while (high >= low)
        {
            mid = (low + high) / 2;

            ll ind = getres(res, mid);
            if (ind == res)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << "! " << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // ll t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
