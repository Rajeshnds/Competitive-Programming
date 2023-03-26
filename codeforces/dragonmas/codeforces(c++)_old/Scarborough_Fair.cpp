#include<bits/stdc++.h>
using namespace std;
int n,m,l,r;
string s;
char c1,c2;
main(){
for(cin>>n>>m>>s;m--;){
        cin>>l>>r>>c1>>c2;
    for(int i=l-1;i<r;i++)if(s[i]==c1)s[i]=c2;
}
cout<<s;
}
