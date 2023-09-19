
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
  ll m, n;
  cin >> m >> n;
  vector<ll> a(m), b(n);
  takeinput(a, m);
  takeinput(b, n);

  ll minvalue=0, maxvalue=0;
 
    vector<ll>tmp=a;
    ll x=0;
    for(ll i=0;i<n;i++){
      x=x | b[i];
    }
    
    for(ll i=0;i<m;i++){
      maxvalue=(maxvalue ^ (a[i]|x));
      minvalue=(minvalue ^ a[i]);
    }
    if(m%2==0){
      swap(minvalue,maxvalue);
    }
    cout<<minvalue<<" "<<maxvalue<<endl;

 
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
