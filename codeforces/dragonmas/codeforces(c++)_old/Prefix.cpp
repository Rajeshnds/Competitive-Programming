#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n-1;i+=2){
    if(s[i]=='a'&&s[i+1]!='b')k++,s[i+1]='b';
    if(s[i]=='b'&&s[i+1]!='a')k++,s[i+1]='a';
}
cout<<k<<endl<<s;
}
