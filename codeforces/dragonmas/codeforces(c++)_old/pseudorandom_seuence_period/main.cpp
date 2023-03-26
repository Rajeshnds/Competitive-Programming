#include<bits/stdc++.h>
using namespace std;
int a,b,m,r,l,k,d,c[100001],f=1;
int main(){
    cin>>a>>b>>m>>r;
    while(f){
        r=(a*r+b)%m;
        if(c[r]==0)c[r]=1;
        else{
            c[r]++;
            if(c[r]==3)f=0;
            l++;
        }
    }
    cout<<l-1;
}
