#include<bits/stdc++.h>
using namespace std;
int n,a[4],b[4];
int area(){
    cin>>n;
    if(n==1)return -1;
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    if(n==2&&a[0]!=a[1]&&b[0]!=b[1])return abs(a[0]-a[1])*abs(b[0]-b[1]);
    if(n==3||n==4){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]!=a[j]&&b[i]!=b[j])return abs(a[i]-a[j])*abs(b[i]-b[j]);
            }
        }
    }
    return -1;
}
int main(){
    cout<<area();
}
