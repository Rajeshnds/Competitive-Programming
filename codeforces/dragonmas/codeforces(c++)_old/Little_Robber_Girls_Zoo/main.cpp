#include<bits/stdc++.h>
using namespace std;
int n,a[101];
int arrange(int n){
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1])swap(a[i],a[i+1]),i=0;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n;arrange(n);
}
