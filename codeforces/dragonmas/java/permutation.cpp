#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
set<string>st;
void permute(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        st.insert(s);
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            // swap(s[l],s[i]); 
        }
    }
}
void solve(){
    int n=s.size();
    permute(s,0,n-1);
    cout<<endl;
    cout<<st.size()<<endl;
    for(auto i:st)cout<<i<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s;
    solve();
}