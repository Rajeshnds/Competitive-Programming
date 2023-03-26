#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int t,n,T,a,b,s;
void not_T(){
    b=0;
    cin>>n>>T;
    while(n--){
        cin>>a;
        if(2*a==T)s=(b++)%2;
        else if(2*a<T)s=0;
        else s=1;
        cout<<s<<" ";
    }
}
int main(){
    for(cin>>t;t--;cout<<endl)not_T();
}
