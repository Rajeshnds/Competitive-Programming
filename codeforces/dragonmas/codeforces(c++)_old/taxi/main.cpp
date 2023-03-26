#include<bits/stdc++.h>
using namespace std;
int n,a,b[5];
int taxi(int n){
    for(int i=0;i<n;i++)cin>>a,b[a]++;
    b[1]=max(0,b[1]-b[3]);
    return b[3]+b[4]+(b[1]+2*b[2]+3)/4;
}
int main(){
    cin>>n;
    cout<<taxi(n);
}
