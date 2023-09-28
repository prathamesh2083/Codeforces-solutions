
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
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   vector<ll>v1(k),v2(k);
   vector<pair<ll,ll>>v(k);
   for(ll i=0;i<k;i++){
   cin>>v1[i];
   }
   for(ll i=0;i<k;i++){
   cin>>v2[i];
   v[i]={v1[i],v2[i]};
   }
   ll q;
   cin>>q;
   cout<<q;
   while(q--){
    ll x;
    cin>>x;
    ll ind=-1;
    ll low=0,high=k-1,mid;
    while(high-low>1){
      mid=(low+high)/2;
      if (x >= v[mid].first && x <= v[mid].second)
      {
        ind = mid;

        break;
      }
      if(x>v[mid].second){
        low=mid;
      }
      else if(x<v[mid].first){
        high=mid;
      }
      
     
    }
    if(x>=v[low].first && x<=v[low].second){
      ind=low;
    }
    else{
      ind=high;
    }
   cout<<"ind : "<<ind<<endl;
    ll a=INT_MAX,b=0;
    a=min(x,v[ind].first+v[ind].second-x);
    b=max(x,v[ind].first+v[ind].second-x);
    a--;b--;
    
   while(a<=b){
    swap(s[a],s[b]);
    a++;
    b--;
   }
   
   }
cout<<s<<endl;
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
  {

    solve();
  }

  return 0;
}
