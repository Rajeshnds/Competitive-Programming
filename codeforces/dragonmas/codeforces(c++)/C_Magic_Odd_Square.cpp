#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    int k=(n+1)/2;
    int a=1,b=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=k||abs(i-j)>=k||i+j>=3*k)cout<<b<<" ",b+=2;
            else cout<<a<<" ",a+=2;
        }
        cout<<endl;
    }
}
int main(){
    cin>>n;
    solve();
}