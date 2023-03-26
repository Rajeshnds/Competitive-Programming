#include<bits/stdc++.h>
using namespace std;
int n,m,d,e,f=1,b=INT_MAX;
int closest(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    m=*min_element(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==m&&f)d=i,f=0;
        else if(a[i]==m)e=i-d,d=i,b=min(b,e);
    }
    return b;
}
int main(){
    cin>>n;cout<<closest(n);
}
