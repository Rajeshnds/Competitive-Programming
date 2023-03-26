#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s[10],t;
void assign_(int i,int j){
    if(s[i][j]=='1')s[i][j]='2';
    else s[i][j]='1';
}
void solve(){
    int j=0,k=0,l=0;
    for(int i=0;i<9;i++){
        assign_(i,k);
        k+=3;
        j++;
        if(j==3){
            l++;
            k=l;
            j=0;
        }
    }
    for(int i=0;i<9;i++)cout<<s[i]<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        for(int i=0;i<9;i++)cin>>s[i];
        solve();
    }
}