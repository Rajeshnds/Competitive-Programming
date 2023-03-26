#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,k,l,m;
int sum(){
    cin>>a>>b>>c>>k>>l>>m;
    k=a-m;
    if(k<0){
        k=-k;k=c-k;
        if(k<0){k=-k;return -2*min(k,b);}
        else return 2*min(k,l);
    }
    else return 2*min(c,l);
}
int main(){
    for(cin>>t;t--;)cout<<sum()<<endl;
}
