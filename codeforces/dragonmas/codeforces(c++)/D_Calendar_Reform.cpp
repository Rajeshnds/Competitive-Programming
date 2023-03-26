#include<bits/stdc++.h>
using namespace std;
int a,n,b[20000001];
void solve(){
    long long int ans=0;
    for(int i=a;i<a+n;i++)ans+=b[i];
    cout<<ans;
}
int main(){
    cin>>a>>n;
    for(int i=1;i<=a+n;i++)b[i]=i;
    for(int i=2;i*i<=a+n;i++){
        int k=1;
        for(int j=i*i;j<=a+n;j+=i*i){
            b[j]=k++;
        }
    }
    solve();
}