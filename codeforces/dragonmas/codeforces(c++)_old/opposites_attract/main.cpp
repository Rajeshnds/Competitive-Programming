#include<bits/stdc++.h>
using namespace std;
long long n,k=0,a=0,b[11]={0},c[11]={0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=0)b[a]++;
        if(a<0)c[abs(a)]++;
    }
    for(int i=b[0]-1;i>=1;i--)k+=i;
    for(int i=1;i<=10;i++){
        k+=(b[i]*c[i]);
    }
    cout<<k;
}
