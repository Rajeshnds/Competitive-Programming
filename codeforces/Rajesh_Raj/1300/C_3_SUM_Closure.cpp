#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,cnt;
vector<int>v;
vector<vector<int>>adj;
string s;
bool calc(int i,int j,int k){
    int sum=v[i]+v[j]+v[k];
    if(v[i]!=sum&&v[j]!=sum&&v[k]!=sum)return false;
    return true;
}
bool calc2(int i,int j,int k){
    int sum=v[i]+v[j]+v[k];
    if(v[0]!=sum&&v[1]!=sum&&v[2]!=sum&&v[3]!=sum)return false;
    return true;
}
void solve(){
    sort(v.begin(),v.end());
    string ans="YES";
    if(n==3){
        if(!calc(0,1,2))ans="NO";
    }
    else if(n==4){
        if(!calc2(0,1,2)||!calc2(0,2,3)||!calc2(1,2,3)||!calc2(0,1,3))ans="NO";
    }
    else if(cnt>=2){
        if(cnt==2&&v[0]!=-v[n-1])ans="NO";
        if(cnt>2)ans="NO";
    }
    cout<<ans;
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
        v.assign(n,0);
        cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=0)cnt++;
        }
        solve();
    }
}