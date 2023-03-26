#include<bits/stdc++.h>
using namespace std;
int d;
string s;
void solve(){
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                d=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(d%8==0){cout<<"YES"<<endl<<d;return;}
            }
        }
    }
    cout<<"NO";
}
int main(){
    cin>>s;
    s="00"+s;
    solve();
}