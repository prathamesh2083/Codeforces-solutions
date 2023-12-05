
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

vector<ll> primes(ll n)
{
    vector<ll> p;

    for (ll i = 2; i * i <= n; i++)
    {
        while (n != 1 && n % i == 0)
        {
            p.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        p.push_back(n);
    }

    return p;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> p = primes(n);

    ll num = -1, len = 0;
    ll maxnum = 0, maxlen = 0;
    for (ll i = 0; i < p.size(); i++)
    {

        if (num == -1)
        {
            num = p[i];
            len = 1;
        }
        else if (p[i] == num)
        {
            len++;
        }
        else
        {
            if (len > maxlen)
            {
                maxlen = len;
                maxnum = num;

                len = 1;
                num = p[i];
            }
            else
            {
                len = 1;
                num = p[i];
            }
        }
    }
    if (len > maxlen)
    {
        maxlen = len;
        maxnum = num;
    }

    cout << maxlen << endl;
    for (ll i = 0; i < maxlen - 1; i++)
    {
        cout << maxnum << " ";
        n /= maxnum;
    }
    cout << n << endl;
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
