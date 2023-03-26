#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],c,d;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
int calculate(int i,int j,int k,int l){
    d=a[i]-c;
    if(c*d==a[k]&&c/d==a[l]){
        if(c>=1&&c<=10000&&d>=1&&d<=10000){
            return 1;
        }
    }
    d=c-a[j];
    if(c*d==a[k]&&c/d==a[l]){
        if(c>=1&&c<=10000&&d>=1&&d<=10000){
            return 1;
        }
    }
    return 0;
}
void solve(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            for(int k=1;k<=4;k++){
                for(int l=1;l<=4;l++){
                    if(i==j||i==k||i==l||j==k||j==l||k==l)continue;
                    c=(a[i]+a[j])/2;
                    if(calculate(i,j,k,l)){
                        cout<<c<<" "<<d;
                        return;
                    }
                    if((a[i]+a[j])%2==1){
                        c++;
                        if(calculate(i,j,k,l)){
                            cout<<c<<" "<<d;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout<<-1<<" "<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>a[1]>>a[2]>>a[3]>>a[4];
        solve();
    }
}