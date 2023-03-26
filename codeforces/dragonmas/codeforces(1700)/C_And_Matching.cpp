#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    x=(n/2)-1;
    if(n==4&&k==3){
        cout<<-1<<endl;
    }
    else if(k==n-1){
        cout<<k-1<<" "<<n-1<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<k-2<<" "<<2<<endl;
        cout<<k-3<<" "<<0<<endl;
        int j=x+1;
        for(int i=x;i>=4;i--){
            cout<<i<<" "<<j<<endl;
            j++;
        }
    }
    else{
        cout<<k<<" "<<n-1<<endl;
        int j=x+1;
        for(int i=x;i>=1;i--){
            if(i==k||j==k){
                if(i==k){
                    cout<<0<<" "<<j<<endl;
                }
                else{
                    cout<<0<<" "<<i<<endl;
                }
            }
            else{
                cout<<i<<" "<<j<<endl;
            }
            j++;
        }
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n>>k;
        solve();
    }   
}