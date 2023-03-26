#include<bits/stdc++.h>
using namespace std;
int juicy_worms(int a[],int d){
    return a[d];
}
int main(){
    int n,m,t=0,d,b,e=1000003;
    cin>>n;
    int a[e];
    for(int i=1;i<=n;i++){
        cin>>b;
        while(b--)a[++t]=i;
    }
    for(cin>>m;m--;)cin>>d,cout<<juicy_worms(a,d)<<endl;
}
