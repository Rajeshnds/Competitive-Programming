#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
map<int,int>mp;
string s;
vector<pair<int,int>>v;
multiset<int>st,st1;
void solve(){
    int r=0;
    for(int i=0;i<2*n-1;i++){
        int x=a[i]+a[2*n-1];
        v.clear();
        st=st1;
        r=1;
        for(int j=0;j<n;j++){
            auto it1=st.end();
            it1--;
            int y=x-*it1;
            st.erase(it1);
            auto it2=st.find(y);
            if(it2==st.end()){
                r=0;
                break;
            }
            v.push_back({x-y,y});
            x=max(x-y,y);
            st.erase(it2);
        }
        if(r){
            cout<<"YES"<<endl;
            cout<<a[2*n-1]+a[i]<<endl;
            for(auto i:v){
                cout<<i.first<<" "<<i.second<<endl;
            }
            break;
        }
    }
    if(r==0)cout<<"NO"<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;    
    for(cin>>t;t--;){
        cin>>n;
        st1.clear();
        for(int i=0;i<2*n;i++)cin>>a[i],st1.insert(a[i]);
        sort(a,a+2*n);
        solve();
    }
}