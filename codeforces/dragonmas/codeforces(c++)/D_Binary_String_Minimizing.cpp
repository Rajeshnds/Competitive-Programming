#include<bits/stdc++.h>
using namespace std;
long long t,n,k,b,j;
string s;
void solve(){
    j=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            b=min(k,i-j);
            k-=b;
            swap(s[i],s[i-b]);
            j++;
        }
    }
    cout<<s;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k>>s;
        solve();
    }
}