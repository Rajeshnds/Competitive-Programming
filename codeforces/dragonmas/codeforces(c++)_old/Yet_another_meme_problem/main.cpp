#include<bits/stdc++.h>
using namespace std;
long long t,a,b,k;
int nine(){
    k=0;
    cin>>b;b++;
    while(b)b/=10,k++;
    return (k-1);
}
int main(){
    for(cin>>t;t--;)cin>>a,cout<<a*nine()<<endl;
}
