#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n;i++){
 if(s[i]!='4'&&s[i]!='7'){cout<<"NO";return 0;}
 else if(i<n/2)k+=s[i];
 else k-=s[i];
}
cout<<(k==0?"YES":"NO");
}
