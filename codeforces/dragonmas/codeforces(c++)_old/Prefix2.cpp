#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n-1;i+=2){
    if(s[i]-s[i+1]==0)s[i]='a'+'b'-s[i],k++;
}
cout<<k<<endl<<s;
}
