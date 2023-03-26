#include<bits/stdc++.h>
using namespace std;
int n,m,l,p;
string s[101];
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>s[i];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        p=1;
        for(int k=0;k<n;k++)if(s[k][j]>s[i][j])p=0;
        if(p){l++;break;}
    }
}
cout<<l;
}
