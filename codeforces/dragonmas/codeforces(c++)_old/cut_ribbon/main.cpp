#include<bits/stdc++.h>
using namespace std;
int n,a,b[4001];
int main(){
    fill(b+1,b+4001,-1e9);
    cin>>n;
    for(int i=1;i<=3;i++){
        cin>>a;
        for(int j=a;j<=n;j++)b[j]=max(b[j],b[j-a]+1);
    }
    cout<<b[n];
}
