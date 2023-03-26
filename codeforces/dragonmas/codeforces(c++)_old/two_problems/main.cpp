#include<bits/stdc++.h>
using namespace std;
int x,t,a,b,d1,d2;
int main(){
    int p[601]={0},q[601]={0},f=0;
    cin>>x>>t>>a>>b>>d1>>d2;
    if(x==0)f=1;
    for(int i=0;i<t;i++){
        p[i]=a-i*d1;
        if(p[i]==x)f=1;
        q[i]=b-i*d2;
        if(q[i]==x)f=1;
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(x==p[i]+q[j])f=1;
        }
    }
    cout<<(f?"YES":"NO");
}
