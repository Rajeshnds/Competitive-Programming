#include<bits/stdc++.h>
using namespace std;
long long t,a,b,x,y,n;
long long product(){
    cin>>a>>b>>x>>y>>n;
    return min(max(x,a-n)*max(y,b-n+min(n,a-x)),max(y,b-n)*max(x,a-n+min(n,b-y)));
}
int main(){
    for(cin>>t;t--;)cout<<product()<<endl;
}
