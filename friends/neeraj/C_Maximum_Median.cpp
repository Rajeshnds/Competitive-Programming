#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    x=n/2;
    for(int i=x+1;i<n;i++){
        if(a[i]>a[x]&&k){
            y=a[i]-a[x];
            if(1ll*k>=1ll*y*(i-x)){
                a[x]=a[i];
                k-=(y*(i-x));
            }
            else{
                k=k/(i-x);
                a[x]+=k;
                k=0;
            }
        }
    }
    if(k){
        k=k/(n-x);
        a[x]+=k;
    }
    cout<<a[x];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    solve();   
}