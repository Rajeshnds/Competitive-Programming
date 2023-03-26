#include<bits/stdc++.h>
using namespace std;
int r,g,b;
int top(int r,int g,int b){
    r=(r-1)/2*3;
    if(g)r=max(r,1+(g-1)/2*3);
    if(b)r=max(r,2+(b-1)/2*3);
    return r;
}
int main(){
    cin>>r>>g>>b;
    cout<<top(r,g,b)+30;
}
