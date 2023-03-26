#include<bits/stdc++.h>
using namespace std;
int n,k,f;
string s,t;
map<string,set<string>>m1,m2;
void solve(){
    for(auto c:m1){
        for(auto d:c.second){
            f=1;
            for(auto e:c.second){
                if(e!=d&&e.size()>=d.size()&&e.substr(e.size()-d.size(),d.size())==d)f=0;
            }
            if(f)m2[c.first].insert(d);
        }
    }
    cout<<m2.size()<<endl;
    for(auto c:m2){
        cout<<c.first<<" "<<c.second.size()<<" ";
        for(auto d:c.second)cout<<d<<" ";
        cout<<endl;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>k;
        for(int j=0;j<k;j++){
            cin>>t;
            m1[s].insert(t);
        }
    }
    solve();
}