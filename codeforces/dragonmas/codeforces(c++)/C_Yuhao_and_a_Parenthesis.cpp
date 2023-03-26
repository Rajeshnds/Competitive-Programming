#include<bits/stdc++.h>
using namespace std;
int n,r,k,m;
map<int,int>mp;
string s;
void solve(){
    for(int i=0;i<n;i++){
        cin>>s;
        k=0;m=0;
        for(int j:s){
            k+=81-j*2;
            m=min(m,k);
        }
        mp[k]+=(m==0||m==k);
    }
    for(auto i:mp)r+=min(i.second,mp[-i.first]);
    cout<<r/2;
}
int main(){
    cin>>n;
    solve();
}