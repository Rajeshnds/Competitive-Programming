#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],b[100001],k,i,j;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    i=n-1;j=n-1;
    while(i>=0||j>=0){
        if(a[j]>b[i]&&j>=0)k+=a[j],j--;
        else i--;
        if(b[i]>a[j]&&i>=0)k-=b[i],i--;
        else j--;
    }
    cout<<k;

}