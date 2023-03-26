#include<bits/stdc++.h>
using namespace std;
unordered_map<string,set<int>>m;
string s[70001];
int n;
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=9;j++){
            for(int k=0;k+j-1<9;k++){
                string t=s[i].substr(k,j);
                if(m[t].size()==1){
                    cout<<t<<endl;
                    j=10;
                    break;
                }
            }
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        for(int j=1;j<=9;j++){
            for(int k=0;k+j-1<9;k++){
                string t=s[i].substr(k,j);
                m[t].insert(i);
            }
        }
    }
    solve();
}