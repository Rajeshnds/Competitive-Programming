#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int pigs_eaten(int n,int m){
    string s[12];
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=1;i<=n;i++)
        for(int j=0;j<m;j++)
            if(s[i][j]=='W'&&(s[i+1][j]=='P'||s[i-1][j]=='P'||s[i][j-1]=='P'||s[i][j+1]=='P'))k++;
    return k;
}
int main(){
    cin>>n>>m;cout<<pigs_eaten(n,m);
}
