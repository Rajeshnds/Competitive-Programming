#include<bits/stdc++.h>
using namespace std;
string s;
set<int>st[123];
int q;
void solve(){
    int a,b,d;
    char c;
    for(int i=1;i<=q;i++){
        cin>>a;
        if(a==1){
            cin>>b>>c;
            st[s[b-1]].erase(b-1);
            st[c].insert(b-1);
            s[b-1]=c;
        }
        else{
            int ans=0;
            cin>>b>>d;
            for(int i='a';i<='z';i++){
                auto it=st[i].lower_bound(b-1);
                if(*it<d&&it!=st[i].end())ans++;
            }
            cout<<ans<<endl;
        }
    }
}
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        st[s[i]].insert(i);
    }
    cin>>q;
    solve();
}