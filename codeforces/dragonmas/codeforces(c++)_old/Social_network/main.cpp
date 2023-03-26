#include<bits/stdc++.h>
using namespace std;
int n,k;
list<string>v;
set<string>st;
int main(){
    cin>>n>>k;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(st.count(s))continue;
        st.insert(s);
        v.push_front(s);
        if(v.size()>k)st.erase(v.back()),v.pop_back();
    }
    cout<<v.size()<<endl;
    for(auto i:v)cout<<i<<" ";
}
