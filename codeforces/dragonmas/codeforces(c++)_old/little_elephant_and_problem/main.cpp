#include<bits/stdc++.h>
using namespace std;
int n,a[100001],k,b[100001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])k++;
    }
    if(k<=2)cout<<"YES";
    else cout<<"NO";
}
