#include<bits/stdc++.h>
using namespace std;
long long n,p,m,a,b,c,d,e,l=INT_MIN;
string s,t;
string maxi(int n){
     for(int i=0;i<n;i++){
        cin>>s>>p>>m>>a>>b>>c>>d>>e;
        p=p*100-m*50+a+b+c+d+e;
        if(p>l)l=p,t=s;
     }
     return t;
}
int main(){
    cin>>n;
    cout<<maxi(n);
}
