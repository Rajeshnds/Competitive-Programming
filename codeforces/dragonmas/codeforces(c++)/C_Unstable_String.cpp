#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void solve(){
    long long a=0,b=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')a=i+1;
        if(s[i]=='1')b=i+1;
        c+=i-min(a,b)+1;
        swap(a,b);
    }
    cout<<c;
}
int main(){
    for(cin>>n;n--;cout<<endl){
        cin>>s;
        solve();
    }
}