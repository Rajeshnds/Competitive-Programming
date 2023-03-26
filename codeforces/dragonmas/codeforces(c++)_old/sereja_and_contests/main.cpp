#include<bits/stdc++.h>
using namespace std;
int x,k,m[4001],c,d,e,f,g;
int main(){
    cin>>x>>k;
    m[x]=1;
    for(int i=1;i<=k;i++){
        cin>>c;
        if(c==1)cin>>d>>e,m[d]=1,m[e]=1;
        else cin>>d,m[d]=1;
    }
    for(int i=1;i<x;i++){
        if(m[i]==0&&m[i+1]==0)f++,i+=1;
        else if(m[i]==0)g++;
    }
    cout<<f+g<<" "<<f*2+g;
}
