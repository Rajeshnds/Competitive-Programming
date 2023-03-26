#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void solve(){
    set<char>st(s.begin(),s.end());
    if(s.size()>=k){
        s.resize(k);
        while(true){
            auto it=st.upper_bound(s.back());
            s.pop_back();
            if(it!=st.end()){
                s.push_back(*it);
                break;
            }
        }
    }
    if(k>s.size())s+=string(k-s.size(),*st.begin());
    cout<<s;
}
int main(){
    cin>>n>>k>>s;
    solve();
}