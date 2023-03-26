#include<bits/stdc++.h>
using namespace std;
int t,ans,k,l,n,m;
string s;
void solve(){
    for(int i=0;i<t;i++){
        cin>>s;
        set<pair<int,int>>st;
        k=0;l=0;ans=0;
        for(auto c:s){
            n=k;m=l;
            if(c=='N')k++;
            else if(c=='S')k--;
            else if(c=='E')l++;
            else l--;
            if(!st.count({n+k,m+l})){
                ans+=5;
                st.insert({n+k,m+l});
            }
            else ans++;
        }
        cout<<ans<<endl;
    }
}
int main(){
    cin>>t;
    solve();
}