#include<bits/stdc++.h>
using namespace std;
int n,a[101];
void arrays(int n){
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<1<<" "<<a[0]<<endl;
    if(a[n-1]==0){
        cout<<2<<" "<<a[1]<<" "<<a[2]<<endl<<n-3;
        for(int i=3;i<n;i++)cout<<" "<<a[i];
    }
    else{
        cout<<1<<" "<<a[n-1]<<endl<<n-2;
        for(int i=1;i<n-1;i++)cout<<" "<<a[i];
    }
}
int main(){
    cin>>n;arrays(n);
}
