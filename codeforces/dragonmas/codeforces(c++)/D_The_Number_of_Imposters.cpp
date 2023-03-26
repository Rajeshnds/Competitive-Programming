// #include<bits/stdc++.h>
// using namespace std;
// int t,n,m,a[200001],k,num[2];
// bool ok;
// vector<vector<pair<int,int>>>v;
// void dfs(int i){
//     num[a[i]]++;
//     for(auto j:v[i]){
//         if(a[j.first]!=-1){
//             if(a[j.first]!=a[i]^j.second){
//                 ok=false;
//             }
//         }
//         else{
//             a[j.first]=a[i]^j.second;
//             dfs(j.first);
//         }   
//     }
// }
// void solve(){
//     v.assign(n+1,vector<pair<int,int>>());
//     int ans=0;
//     fill(a,a+n+1,-1);
//     int x,y;
//     string s;
//     for(int i=1;i<=m;i++){
//         cin>>x>>y>>s;
//         int k=(s=="imposter");
//         v[x].push_back({y,k});
//         v[y].push_back({x,k});
//     }
//     ok=true;
//     for(int i=1;i<=n;i++){
//         if(a[i]==-1){
//             num[0]=num[1]=0;
//             a[i]=1;
//             dfs(i);
//             ans+=max(num[0],num[1]);
//         }
//     }
//     cout<<(ok?ans:-1);
// }
// int main(){
//     for(cin>>t;t--;cout<<endl){
//         cin>>n>>m;
//         solve();
//     }
// }

#include<bits/stdc++.h>
using namespace std;
# define ll long long
int n,sum;
vector<pair<int,int>>v;
void solve(){
    int l,r;
    for(int i=0;i<n-2;i++){
        l=i+1;r=n-1;
        while(l<r){
            if(v[i].first+v[l].first+v[r].first==sum){
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second;
                return;
            }
            else if(v[i].first+v[l].first+v[r].first<sum)l++;
            else r--;
        }
    }
    cout<<-1;
}
int main(){
    int a,b;
    cin>>n>>sum;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    solve();
}