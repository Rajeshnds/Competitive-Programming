#include<bits/stdc++.h>
using namespace std;
int k,p,q;
string s;
int main(){
    cin>>k>>p>>q>>s;
    for(int i=0;i<=k;i+=p){
        if((k-i)%q==0){
            cout<<i/p+(k-i)/q<<endl;
            int j=0;
            for(j=0;j<=i-p;j+=p){
                cout<<s.substr(j,p)<<endl;
            }
            for(int i=j;i<=k-q;i+=q){
                cout<<s.substr(i,q)<<endl;
            }
            return 0;
        }
    }
    cout<<-1;
}