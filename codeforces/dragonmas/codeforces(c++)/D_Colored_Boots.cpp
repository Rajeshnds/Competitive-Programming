#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
set<pair<int,int>>st;
queue<int>q1[125],q2[125];
void insert(char a,char b){
    while(!q1[a].empty()&&!q2[b].empty()){
        st.insert({q1[a].front(),q2[b].front()});
        q1[a].pop();
        q2[b].pop();
    }
}
void solve(){
    for(int i='a';i<='z';i++){
        insert(i,i);
    }
    for(int i='a';i<='z';i++){
        insert(i,'?');
        insert('?',i);
    }
    insert('?','?');
    cout<<st.size()<<endl;
    for(auto i:st)cout<<i.first<<" "<<i.second<<endl;
}
int main(){
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)q1[s[i]].push(i+1),q2[t[i]].push(i+1);
    solve();
}