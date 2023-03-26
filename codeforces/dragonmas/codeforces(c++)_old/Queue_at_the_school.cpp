#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
string s;
cin>>s;
for(int j=1;j<=m;j++){
for(int i=0;i<s.size();i++)
    if(s[i]=='B'&&s[i+1]=='G'){
        swap(s[i],s[i+1]);
        i++;
 }
}
cout<<s;
}
