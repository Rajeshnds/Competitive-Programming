#include<bits/stdc++.h>
using namespace std;
int n,a,b,x,y,k,l,d,w;
int main(){
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x>a)k++;
        else if(x<a)l++;
        if(y>b)d++;
        else if(y<b)w++;
    }
    int z=max(k,max(l,max(d,w)));
    cout<<z<<endl;
    if(z==k)cout<<a+1<<" "<<b;
    else if(z==l)cout<<a-1<<" "<<b;
    else if(z==d)cout<<a<<" "<<b+1;
    else cout<<a<<" "<<b-1;
}