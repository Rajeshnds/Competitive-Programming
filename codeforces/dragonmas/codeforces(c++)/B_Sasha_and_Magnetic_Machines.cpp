#include<bits/stdc++.h>
using namespace std;
int n,s,a[50001],m,j;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    m=s;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                s=min(s,m-a[i]+a[i]/j+a[0]*j-a[0]);
            }
        }
    }
    cout<<s;
}