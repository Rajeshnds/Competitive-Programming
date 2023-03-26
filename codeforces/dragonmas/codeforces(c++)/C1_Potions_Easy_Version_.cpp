#include<bits/stdc++.h>
using namespace std;
long long n,s,ans;
priority_queue<int>q;
void solve(){
    int b;
    for(int i=0;i<n;i++){
        cin>>b;
        s+=b;
        ans++;
        q.push(-b);
        if(s<0)s+=q.top(),q.pop(),ans--;
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}