#include<bits/stdc++.h>
using namespace std;
string s;
long long a[2001],b[2001],ans,n;
void f(int i,int j){
    for(;i>=0&&j<n;i--,j++){
        if(s[i]==s[j])a[i]++,b[j]++;
        else break;
    }
}
void solve(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans+=b[i]*a[j];
        }
    }
    cout<<ans;
}
int main(){
    cin>>s;
    n=s.size();;
    for(int i=0;i<n;i++){
        f(i,i);
    }
    for(int i=1;i<n;i++){
        f(i-1,i);
    }
    solve();
}