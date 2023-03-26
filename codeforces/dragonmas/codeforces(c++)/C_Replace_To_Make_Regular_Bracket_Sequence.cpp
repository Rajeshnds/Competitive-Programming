#include<bits/stdc++.h>
using namespace std;
int k;
stack<char>st;
string s;
void solve(){
    for(auto c:s){
        if(c=='['||c=='{'||c=='('||c=='<'){
            st.push(c);
        }
        else{
            if(st.empty()){
                cout<<"Impossible";
                return;
            }
            else{
                if(c=='>'&&st.top()!='<'||
                c=='}'&&st.top()!='{'||
                c==']'&&st.top()!='['||
                c==')'&&st.top()!='(')k++;
                st.pop();
            }
        }
    }
    if(st.size())cout<<"Impossible";
    else cout<<k;
}
int main(){
    cin>>s;
    solve();
}