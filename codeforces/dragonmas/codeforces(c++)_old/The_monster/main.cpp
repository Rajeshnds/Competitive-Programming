#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
void read(){
    cin>>a>>b>>c>>d;
}
int solve(){
    int m=max(a,max(b,max(c,d)));
    for(int i=0;i<=m;i++){
        if(d-b+i*c>=0&&(d-b+i*c)%a==0)return d+i*c;
    }
    return -1;
}
int main(){
    read();
    cout<<solve();
}
