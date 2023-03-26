#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    st.insert(6);
    st.insert(13);
    st.insert(20);
    st.insert(27);
    st.insert(7);
    st.insert(14);
    st.insert(21);
    st.insert(28);
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        int ans=8;
        for(int i=1;i<=n;i++){
            cin>>x;
            if(!st.count(x))ans++;
        }
        cout<<ans;
    }   
}