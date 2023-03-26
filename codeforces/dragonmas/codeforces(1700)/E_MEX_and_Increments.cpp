#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],cnt[N],ans[N];
string s,t;
vector<ll>v;
// set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
stack<int>st;
void solve(){
    fill(ans,ans+n+1,-1);
    ll sum=0;
    while(!st.empty())st.pop();
    for(int i=0;i<=n;i++){
        if(i>0&&cnt[i-1]==0){
            if(st.empty()){
                break;
            }
            int j=st.top();
            st.pop();
            sum+=(i-1-j);
        }
        ans[i]=cnt[i]+sum;
        while(i>0&&cnt[i-1]>1){
            st.push(i-1);
            cnt[i-1]--;
        }
    }
    for(int i=0;i<=n;i++)cout<<ans[i]<<" ";
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
        fill(cnt,cnt+n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        sort(a+1,a+n+1);
        solve();
    }
}