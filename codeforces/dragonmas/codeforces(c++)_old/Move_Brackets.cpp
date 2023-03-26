#include<bits/stdc++.h>
using namespace std;
int t,n,k,a,b;
string s;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;b=0;k=0;a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')a++;else b++;
            if(a<b)k++,b--;
        }
        cout<<k;
    }
}
