#include<bits/stdc++.h>
using namespace std;
int k,j,d;
string s,t,u;
void solve(){
    for(int i=0;i<t.size();i++){
        if(t[i]==s[j])j++,u+=t[i];
        if(j==s.size()){k=i;break;}
    }
    j=s.size()-1;
    for(int i=t.size()-1;i>=0;i--){
        if(t[i]==s[j])j--;
        if(j==-1){d=i;break;}
    }
    cout<<max(d-k,0);
}
int main(){
    cin>>s>>t;
    solve();
}