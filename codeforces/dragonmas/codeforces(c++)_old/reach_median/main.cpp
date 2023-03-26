#include<bits/stdc++.h>
using namespace std;
long long n,s,a[200001],k;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(s>a[n/2]){
        int j=n/2;
        while(a[j]<s&&j<n){
            k+=(s-a[j]);
            j++;
        }
    }
    else if(s<a[n/2]){
        int j=n/2;
        while(a[j]>s&&j>=0){
            k+=(a[j]-s);
            j--;
        }
    }
    cout<<k;
}
