#include<bits/stdc++.h>
using namespace std;
int n,k,a[100001],b[100001];
int main(){
    cin>>n>>k;
    int j=0;
    for(int i=0;i<n;i++)cin>>a[i],b[i%k]+=a[i];
    for(int i=0;i<k;i++)if(b[i]<b[j])j=i;
    cout<<j+1;
}
