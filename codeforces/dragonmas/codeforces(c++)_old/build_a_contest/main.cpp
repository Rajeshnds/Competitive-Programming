#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],b,k,j=1;
string s;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>b;
        a[b]++;
        for(;j<=n&&a[j]>k;j++);
        cout<<(j>n?k++,j=1:0);
    }
}
