#include<bits/stdc++.h>
using namespace std;
int n,k,j,a[50],t;
void factorize(){
    cin>>n>>k;t=n;
    for(int i=2;i<=t&&n>0;i++){
        if(n%i==0)n/=i,a[j]=i,i--,j++;
        if(j==k)break;
    }
    if(j<k)cout<<-1;
    else{for(int i=0;i<j-1;i++)cout<<a[i]<<" ";cout<<n*a[j-1];}
}
int main(){
    factorize();
}
