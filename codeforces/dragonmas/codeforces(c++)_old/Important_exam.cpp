#include<bits/stdc++.h>
using namespace std;
int n,m,a[1002][5],k,v;
string s;
main(){
cin>>n>>m;
for(int i=1;i<=n;i++){
    cin>>s;
    for(int j=1;j<=m;j++){
        a[j][s[j-1]-65]++;
    }
}
for(int i=1;i<=m;i++){
    cin>>v;
k+=v*max(a[i][0],max(a[i][1],max(a[i][2],max(a[i][3],a[i][4]))));
}
cout<<k;
}
