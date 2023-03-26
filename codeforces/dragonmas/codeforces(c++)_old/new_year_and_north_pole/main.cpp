#include<bits/stdc++.h>
using namespace std;
int n,t,k,f=1;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>n>>s;
        if((k==0&&s[0]!='S')||(k==20000&&s[0]!='N'))f=0;
        s[0]=='N'?k-=n:s[0]=='S'?k+=n:k;
        if(k<0||k>20000)f=0;
    }
    cout<<(!k&&f?"YES":"NO");
}
