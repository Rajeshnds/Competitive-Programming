#include<bits/stdc++.h>
using namespace std;
long long t,k,s;
int main(){
    for(cin>>t;t--;){
        cin>>k;
        s=100;
        while(s%k!=0)s+=100;
        cout<<s/k<<endl;
    }
}
