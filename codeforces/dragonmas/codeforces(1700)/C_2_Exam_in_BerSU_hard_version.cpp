#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<int>v,counts;
string s,t;
void solve(){
    int sum=0;
    vector<int>ans;
    counts.assign(101,0);
    for(int i=1;i<=n;i++){
        sum+=v[i];
        if(sum>m){
            int leave_counts=0,leave_sum=0;
            for(int j=100;j>=1;j--){
                if(sum-leave_sum-j*counts[j]<=m){
                    leave_counts+=(sum-leave_sum-m+j-1)/j;
                    ans.push_back(leave_counts);
                    break;
                }
                else{
                    leave_counts+=counts[j];
                    leave_sum+=j*counts[j];
                }
            }
        }
        else{
            ans.push_back(0);
        }
        counts[v[i]]++;
    }   
    for(auto i:ans)cout<<i<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    v.assign(n+1,0);
    for(int i=1;i<=n;i++)cin>>v[i];
    solve();
}