#include<bits/stdc++.h>
using namespace std;
long long t,n,d;
string run(){
    cin>>n>>d;
    return (n+1)*(n+1)>=d*4?"YES":"NO";
}
int main(){
    for(cin>>t;t--;)cout<<run()<<endl;
}
