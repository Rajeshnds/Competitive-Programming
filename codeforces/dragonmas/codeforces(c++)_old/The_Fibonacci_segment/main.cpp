#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,b,c;
int fibonacci(int n){
    n>=2?k=2:k=1;
    cin>>a>>b;
    for(int i=3;i<=n;i++){
        cin>>c;
        if(c==a+b)k++,m=max(m,k);
        else k=2;
        a=b;b=c;
        }
    return max(m,k);
}
int main(){
    cin>>n;cout<<fibonacci(n);
}
