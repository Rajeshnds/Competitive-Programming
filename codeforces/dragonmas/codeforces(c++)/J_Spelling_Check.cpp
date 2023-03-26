#include<bits/stdc++.h>
using namespace std;
string s,t;
set<int>st;
void solve(){
    int k=0,l;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            k++;
            if(k>1){cout<<0;return;}
            l=i;
            while(l>=0&&s[l]==s[i])st.insert(l+1),l--;
            s.erase(i,1);
            i--;
        }
    }
    cout<<st.size()<<endl;
    for(auto i:st)cout<<i<<" ";
}
int main(){
    cin>>s>>t;
    solve();
}