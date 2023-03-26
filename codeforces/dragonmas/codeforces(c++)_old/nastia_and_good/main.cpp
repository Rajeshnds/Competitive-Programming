#include<bits/stdc++.h>
using namespace std;
long long t,a,b;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        if(b==1)cout<<"NO";
        else{
            cout<<"YES"<<endl<<a<<" "<<a*(b*2-1)<<" "<<a*b*2;
        }
    }
}
