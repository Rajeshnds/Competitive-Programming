#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t;
ll d,k;
void solve(){
    ll x=0,y=0;
    while(true){
        if(x<=y&&(x+k)*(x+k)+y*y<=d*d)x+=k;
        else if(x>y&&x*x+(y+k)*(y+k)<=d*d)y+=k;
        else break;
    }
    cout<<(x==y?"Utkarsh":"Ashish");
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>d>>k;
        solve();
    }   
}