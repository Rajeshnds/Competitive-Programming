#include<bits/stdc++.h>
using namespace std;
int n,a,k,l;
string s;
priority_queue<int>q1,q2,q3;
void solve(){
    long long ans=0;
    for(int i=1;i<=n;i++){
        cin>>s>>a;
        if(s=="11")ans+=a,k++;
        else if(s=="10")q1.push(a);
        else if(s=="01")q2.push(a);
        else q3.push(a);
    }
    while(!q1.empty()&&!q2.empty()){
        ans+=q1.top();
        ans+=q2.top();
        q1.pop();
        q2.pop();
    }
    for(int i=1;i<=k;i++){
        int a,b,c;
        q1.push(0);q2.push(0);q3.push(0);
        a=q1.top();
        b=q2.top();
        c=q3.top();
        if(a>b&&a>c)ans+=a,q1.pop();
        else if(b>a&&b>c)ans+=b,q2.pop();
        else ans+=c,q3.pop();
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}