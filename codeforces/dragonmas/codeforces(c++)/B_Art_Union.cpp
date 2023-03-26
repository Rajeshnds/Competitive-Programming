#include<bits/stdc++.h>
using namespace std;
int m,n,a[6],c;
int main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>c;
            a[j]=max(a[j]+c,a[j-1]+c);
        }
        cout<<a[n]<<" ";
    }
}