#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(){
    cout<<m<<endl;
    for(int i=1;i<=n;i++)cout<<i<<" "<<i%n+1<<endl;
    int j=1;
    for(int i=1;i<=m-n;i++){
        cout<<j<<" "<<j+2<<endl;
        if(j%2==0)j+=2;
        j++;
    }
}
int main(){
    int f;
    cin>>n;m=n;
    while(true){
        f=1;
        for(int j=2;j*j<=m;j++){
            if(m%j==0)f=0;
        }
        if(f)break;
        else m++;
    }
    solve();
}