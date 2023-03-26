#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        int d=0,e=0;
        for(int i=0;i<n;i++){
            cin>>k;
            ll s=1;
            for(int j=0;j<=62;j++){
                if(s==k){
                    if(j%2==0)d++;
                    else e++;
                    break;
                }
                s*=2;
            }
        }
        d+=(e/2);
        ll s=1;
        for(int i=1;i<=d;i++){
            s=(s*2)%mod;
        }
        cout<<(s-1)%mod;
    }
}