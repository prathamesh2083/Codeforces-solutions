
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


void solve()
{
  ll n;
  cin>>n;
  vector<ll>a(n),b(n);
  
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  vector<ll>tmp=a;
  sort(tmp.begin(),tmp.end());
  
  ll zero=0,one=0;
  for (ll i = 0; i < n; i++)
  {
    cin >> b[i];
    if(b[i]==0){
      zero++;
    }
    else{
      one++;
    }
  }
  if (tmp == a)
  {
    cout << "Yes" << endl;
    return;
  }
  if(zero>0 && one>0){
    cout<<"Yes"<<endl;
  }
  else{

cout<<"No"<<endl;
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

  ll psp;
  cin >> psp;
  while (psp--)
    solve();

  return 0;
}
