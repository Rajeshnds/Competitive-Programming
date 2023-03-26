#include<bits/stdc++.h>
using namespace std;
int n,s[101],r[101],h[101],c[101],a=-1;
bool b;
int cheapest(int n){
    for(int i=0;i<n;i++)cin>>s[i]>>r[i]>>h[i]>>c[i];
    for(int i=0;i<n;i++){
        b=true;
        for(int j=0;j<n;j++){
            if(s[i]<s[j]&&r[i]<r[j]&&h[i]<h[j])b=false;
        }
            if(b&&(c[i]<c[a]||a==-1))a=i;
    }
    return a+1;
}
int main(){
    cin>>n;
    cout<<cheapest(n);
}
