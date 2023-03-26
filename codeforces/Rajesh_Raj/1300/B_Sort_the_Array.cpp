#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    sort(b+1,b+n+1);
    int index1=1,index2=1;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            index1=i;
            break;
        }
    }
    for(int i=n;i>=1;i--){
        if(a[i]!=b[i]){
            index2=i;
            break;
        }
    }
    vector<int>v;
    for(int i=1;i<index1;i++)v.push_back(a[i]);
    for(int i=index2;i>=index1;i--)v.push_back(a[i]);
    for(int i=index2+1;i<=n;i++)v.push_back(a[i]);
    if(is_sorted(v.begin(),v.end())){
        cout<<"yes"<<endl;
        cout<<index1<<" "<<index2;
    }
    else{
        cout<<"no";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i];
    solve();
}