#include<bits/stdc++.h>
using namespace std;
int t,n;
long long a[61];
void solve(){
    int m=1e5;
    string t=to_string(n);
    for(int i=0;i<=60;i++){
        string s=to_string(a[i]);
        int k=0;
        for(int j=0;j<t.size();j++){
            if(t[j]==s[k])k++;
        }
        m=min(m,int(t.size())-k+int(s.size())-k);
    }
    cout<<m;
}
int main(){
    for(int i=0;i<=60;i++){
        a[i]=(1LL*1<<1LL*i);
    }
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}