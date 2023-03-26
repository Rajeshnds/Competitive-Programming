#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
string s,t;
pair<int,int>p1[N],p2[N];
multiset<pair<int,pair<int,int>>>st;
map<pair<int,int>,vector<int>>mp;
map<pair<int,int>,int>temp;
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        x=p1[i].first;
        y=p1[i].second;
        if(i>1){
            pair<int,pair<int,int>>p3=make_pair((*st.begin()).first,(*st.begin()).second);
            if(p3.first<x){
                auto it=st.begin();
                st.erase(it);
                st.insert({y,{x,p3.second.second}});
                mp[p1[i]].push_back(p3.second.second);
            }
            else{
                ans++;
                st.insert({y,{x,ans}});
                mp[p1[i]].push_back(ans);
            }
        }
        else{
            st.insert({y,{x,i}});
            mp[p1[i]].push_back(1);
            ans++;
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++){
        cout<<mp[p2[i]][temp[p2[i]]]<<" ";
        temp[p2[i]]++;
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
    for(int i=1;i<=n;i++){
        cin>>p1[i].first>>p1[i].second;
        p2[i]=p1[i];
    }
    sort(p1+1,p1+n+1);
    solve();   
}