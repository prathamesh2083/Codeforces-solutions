
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
char convert(char ch){

    if(ch=='3'){
        return '0';
    }
    else if(ch=='4'){
        return '1';
    }
    return ch;
}
void solve()
{
    ll m,n;
    cin>>m>>n;
    vector<string>a(m),b(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
           if(a[i][j]!=b[i][j]){
               if(convert((char)(a[i][j]+1))==b[i][j]){
                     a[i][j]+=1;
                     a[i+1][j+1]+=1;
                     a[i+1][j]+=2;
                     a[i][j+1]+=2;
               }
               else{
                   a[i][j] += 2;
                   a[i + 1][j + 1] += 2;
                   a[i + 1][j] += 1;
                   a[i][j + 1] += 1;
               }

               
               
              a[i][j]=convert(a[i][j]);
              a[i + 1][j + 1] = convert(a[i+1][j+1]);
              a[i + 1][j] = convert(a[i+1][j]);
              a[i][j + 1] = convert(a[i][j+1]);
           }
        }
    }
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            if(a[i][j]!=b[i][j]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

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
