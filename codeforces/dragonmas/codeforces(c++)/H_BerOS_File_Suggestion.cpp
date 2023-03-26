#include<bits/stdc++.h>
using namespace std;
int n,q;
string s;
map<string,set<string>>m;
void solve(){
    for(int i=1;i<=q;i++){
        cin>>s;
        int k=m[s].size();
        cout<<k<<" "<<(k?*m[s].begin():"-")<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            for(int k=j;k<s.size();k++){
                m[s.substr(j,k-j+1)].insert(s);
            }
        }
    }
    cin>>q;
    solve();
}