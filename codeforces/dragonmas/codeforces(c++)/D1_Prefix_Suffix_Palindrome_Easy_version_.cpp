#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int f(int l,int r){
    while(l<r&&s[l]==s[r])l++,r--;
    return (l>=r);
}
void solve(){
    int l=0,r=s.size()-1;
    while(l<r&&s[l]==s[r])l++,r--;
    int l2,r2;
    for(l2=l;l2<=r;l2++)if(f(l2,r))break;
    for(r2=r;r2>=l;r2--)if(f(l,r2))break;
    cout<<s.substr(0,l)<<
    (r2-l>r-l2?s.substr(l,r2-l+1):s.substr(l2,r-l2+1))<<
    s.substr(r+1);
}
int main(){
    for(cin>>n;n--;cout<<endl){
        cin>>s;
        solve();
    }
}