
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll east=0,west=0,north=0,south=0;
  for(ll i=0;i<n;i++){

    if(s[i]=='E') east++;
    else if(s[i]=='W') west++;
    else if(s[i]=='N') north++;
    else south++;
  }
  string rem="";
  if(east%2){
      rem+="E";
  }
  if(north%2){
    rem+="N";
  }
  if(south%2){
    rem+="S";
  }
  if(west%2){
    rem+="W";
  }
  
  if(rem.length()%2==1 ){
    cout<<"NO"<<endl;
    return;
  }
  else if(rem.length()!=0 && rem!="EW" && rem!="NS" && rem.length()!=4){
    cout<<"NO"<<endl;
    return;
  }
  string ans;
  for(ll i=0;i<n;i++){
         
        if(s[i]=='E'){
           if(east%2==0){
            
             ans.push_back('R');
           }
           else{
             ans.push_back('H');
           }
           east--;
          
        }
        else if(s[i]=='W'){
          if (west % 2 == 0)
          {
            ans.push_back('R');
          }
          else
          {
            ans.push_back('H');
          }
          west--;
        }
        else if(s[i]=='N'){
          if (north % 2 == 0)
          {
            ans.push_back('R');
          }
          else
          {
            if(north==1 && rem.length()==4){
              ans.push_back('R');
            }
            else
            ans.push_back('H');
          }
          north--;
        }
        else{
          if (south % 2 == 0)
          {
            ans.push_back('R');
          }
          else
          {
            if (south == 1 && rem.length() == 4)
            {
              ans.push_back('R');
            }
            else
              ans.push_back('H');
          }
          south--;
        }
  }

  if(ans.find('H')==-1 || ans.find('R')==-1){
    cout<<"NO"<<endl;
  }
  else{
    cout<<ans<<endl;
  }
  // cout<<endl;

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
