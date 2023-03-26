#include<bits/stdc++.h>
using namespace std;
long long k,p,i=11,ans,j;
string s,t;
int main(){
    cin>>k>>p;
    for(int i=1;i<=k;i++){
        s=to_string(i);
        t=s;
        reverse(t.begin(),t.end());
        s+=t;
        j=stoll(s);
        ans=(ans+j)%p;
    }
    cout<<ans;
}