#include<bits/stdc++.h>
using namespace std;
int n;
int numbers(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(a[i]==a[i-1]||a[n-1]%a[i]){cout<<a[n-1]<<" "<<a[i];break;}
    }
}
int main(){
    cin>>n;numbers(n);
}
