#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],k=1,l=1;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[0]==a[n-1])return cout<<0<<" "<<n*(n-1)/2,0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1])k++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==a[i-1])l++;
        else break;
    }
    cout<<a[n-1]-a[0]<<" "<<k*l;
}
