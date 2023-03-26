#include<bits/stdc++.h>
using namespace std;
int n,a[100001],l=-1e9,r=1e9;
string s;
void solve(){
    for(int i=1;i<n;i++){
        if(s[i]=='1'&&s[i-1]=='0'){
            l=max(l,*max_element(a+i-4,a+i+1)+1);
        }
        if(s[i]=='0'&&s[i-1]=='1'){
            r=min(r,*min_element(a+i-4,a+i+1)-1);
        }
    }
    cout<<l<<" "<<r;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>s;
    solve();
}
