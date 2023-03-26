#include<bits/stdc++.h>
using namespace std;
long long n,s,k;
void min_move(int n){
    int a[n+1]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        k=1;
        while(i+k<=n)k*=2;
        k/=2;
        s+=a[i];
        a[i+k]+=a[i];
        cout<<s<<endl;
    }
}
int main(){
    int b;
    cin>>n;
    if(n==1)cin>>b,cout<<b;else min_move(n);
}
