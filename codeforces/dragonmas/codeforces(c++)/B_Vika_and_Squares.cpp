#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],s,m,k;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    m=*min_element(a,a+n);
    for(int i=0;i<2*n;i++){
        a[i%n]>m?k++:k=0;
        s=max(s,k);
    }
    cout<<n*m+s;
}