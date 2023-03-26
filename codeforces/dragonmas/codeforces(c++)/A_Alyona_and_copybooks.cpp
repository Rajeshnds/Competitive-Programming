#include<bits/stdc++.h>
using namespace std;
long long k,n,a,b,c;
int main(){
    cin>>n>>a>>b>>c;
    if(n%4==0)cout<<0;
    else{
        k=n%4;
        if(k==1){
            cout<<min(3*a,min(c,a+b));
        }
        else if(k==2){
            cout<<min(2*a,min(b,2*c));
        }
        else{
            cout<<min(a,min(b+c,3*c));
        }
    }
}