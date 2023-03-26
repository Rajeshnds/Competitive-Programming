#include<bits/stdc++.h>
using namespace std;
int weather(int a,int b){
    return a-b;
}
int main(){
    int n,a,b,d,i=1,l=1,k;
    for(cin>>n>>a>>b,k=b-a;i<=n-2;i++){
        cin>>a;
        d=weather(a,b);
        if(d!=k)l=0;
        b=a;
    }
    cout<<(l?b+k:a);
}
