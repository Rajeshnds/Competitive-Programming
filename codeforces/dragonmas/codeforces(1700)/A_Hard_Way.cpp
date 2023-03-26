#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
int a1,b1,a2,b2,a3,b3;
string s;
vector<int>v;
set<int>st;
void solve(){
    float ans=0;
    if(b1==b2&&b3<b1){
        ans+=(abs(a1-a2));
    }
    if(b1==b3&&b2<b1){
        ans+=(abs(a1-a3));
    }
    if(b2==b3&&b1<b2){
        ans+=abs(a2-a3);
    }
    printf("%.81f\n",ans);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        solve();
    }
}