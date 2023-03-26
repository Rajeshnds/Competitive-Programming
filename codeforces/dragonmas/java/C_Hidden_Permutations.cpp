#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    for(int i=0;i<=n;i++)a[i]=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            int x=0;
            while(true){
                cout<<"? "<<i<<endl;
                cin>>k;
                a[x]=k;
                x=k;
                if(a[x])break;
            }
        }
    }
    cout<<"! ";
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        solve();
    }
}