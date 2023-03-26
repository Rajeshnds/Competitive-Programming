#include<bits/stdc++.h>
using namespace std;
int q,l,r,k,a[10][1000001];
int f(int n){
    int t=1;
    while(n){
        if(n%10)t*=(n%10);
        n/=10;
    }
    return t;
}
int g(int n){
    if(n<10)return n;
    else return g(f(n));
}
int main(){
    for(int i=1;i<=1000000;i++){
        for(int j=1;j<=9;j++){
            a[j][i]+=a[j][i-1];
        }
        a[g(i)][i]++;
    }
    for(cin>>q;q--;){
        cin>>l>>r>>k;
        cout<<a[k][r]-a[k][l-1]<<endl;
    }
}