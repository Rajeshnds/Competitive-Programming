#include<bits/stdc++.h>
using namespace std;
long long a,b,t,n,k;
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        a=0;b=1;
        while(a<k){
            a+=b;
            b++;
        }
        string s(n,'a');
        s[n-b]='b';
        s[n-b+1+a-k]='b';
        cout<<s<<endl;
    }
}
