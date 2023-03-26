#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,len,height[N];
void solve(){
    vector<int>peak;
    for(int i=2;i<len;i++){
        if(height[i]>height[i-1]&&height[i]>height[i+1]){
            peak.push_back(i);
        }
    }
    int size=peak.size();
    int j=0;
    int max_peak=size,left_border=1;
    int border=2;
    for(int i=len;i<n;i++){
        if(peak.size()>j&&peak[j]==border){
            j++;
        }
        if(height[i]>height[i-1]&&height[i]>height[i+1]){
            peak.push_back(i);
            size++;
        }
        if(size-j>max_peak)max_peak=size-j,left_border=border;
        border++;
    }
    cout<<max_peak+1<<" "<<left_border;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>len;
        for(int i=1;i<=n;i++)cin>>height[i];
        solve();
    }
}