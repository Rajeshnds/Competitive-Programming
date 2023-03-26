#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
string s;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        k=0;
        for(int i=0;i<n;i++)k+=(s[i]=='0');
        if(k&1){
            if((k+1)%4==0)cout<<"ALICE";
            else cout<<"BOB";
        }
        else{
            cout<<(k%4==0?"DRAW":"BOB");
        }
    }

}
