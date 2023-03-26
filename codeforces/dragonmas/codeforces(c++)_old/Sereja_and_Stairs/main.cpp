#include<bits/stdc++.h>
using namespace std;
int m,c[100000],n,j,a,b[5001];
void stairs(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,m=max(m,a),b[a]++;
    for(int i=1;i<=m;i++)if(b[i])c[j++]=i,b[i]--;
    for(int i=m-1;i>=1;i--)if(b[i])c[j++]=i;
    cout<<j<<endl;
    for(int i=0;i<j;i++)cout<<c[i]<<" ";
}
int main(){
    stairs();
}
