#include<bits/stdc++.h>
using namespace std;
int n,a[101],k,i=1;
int main(){
    for(cin>>n;i<=n;i++)cin>>a[i];
    for(i=2;i<n;i++){
        if(a[i]==0&&a[i-1]&&a[i+1])k++,i+=2;
    }
    cout<<k;
}
