#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int i=1,j=n;
    int alice_total=0,bob_total=0;
    int alice_move=0,bob_move=0;
    int alice_cur=0,bob_cur=0;
    while(i<=j){
        if(alice_cur<=bob_cur){
            while(i<=j&&alice_cur<=bob_cur){
                alice_total+=a[i];
                alice_cur+=a[i];
                i++;
            }
            alice_move++;
            bob_cur=0;
        }
        else{
            while(i<=j&&bob_cur<=alice_cur){
                bob_total+=a[j];
                bob_cur+=a[j];
                j--;
            }
            alice_cur=0;
            bob_move++;
        }
    }
    cout<<alice_move+bob_move<<" "<<alice_total<<" "<<bob_total;
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
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}