#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int i=1,val=0;
    while(val+i<=k){
        val+=i;
        i++;
    }
    string s=string(n-i,'a');
    if(val==k){
        s+="bb";
        int size=s.size();
        for(int i=1;i<=n-size;i++)s+='a';
        cout<<s;
        return;
    }
    int size=s.size();
    s[size-1]='b';
    for(int i=1;i<=n-size;i++)s+='a';
    val=k-val;
    s[n-val]='b';
    cout<<s;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}