#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[505];
main(){
cin>>n>>m;
for(int i=0;i<n;i++)cin>>s[i];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    if(s[i][j]=='.')s[i][j]='D';
    else if(s[i][j]=='S'&&(s[i][j+1]=='W'||s[i][max(0,j-1)]=='W'||s[i+1][j]=='W'||s[max(0,i-1)][j]=='W'))return cout<<"No",0;
}
}
cout<<"Yes"<<endl;
for(int i=0;i<n;i++)cout<<s[i]<<endl;
}
