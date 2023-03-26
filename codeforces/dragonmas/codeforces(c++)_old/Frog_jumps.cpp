#include<bits/stdc++.h>
using namespace std;
int n,k,m;
string s;
main(){
for(cin>>n;n--;){
    cin>>s;
    k=0;m=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){k++;m=max(m,k);}
        else k=0;
    }
    cout<<m+1<<endl;
}
}
