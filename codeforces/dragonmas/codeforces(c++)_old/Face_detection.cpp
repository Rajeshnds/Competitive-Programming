#include<bits/stdc++.h>
using namespace std;
int n,m,k,h='a'*'c'*'f'*'e';
string s[52];
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>s[i];
for(int i=0;i<n-1;i++){
    for(int j=0;j<m-1;j++){
        if(s[i][j]*s[i][j+1]*s[i+1][j]*s[i+1][j+1]==h)k++;
    }
}
cout<<k;
}

