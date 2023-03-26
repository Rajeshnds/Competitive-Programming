#include<bits/stdc++.h>
using namespace std;
int n,a,b;
char c;
int main(){
    cin>>n>>a>>c>>b;
    // scanf("%d",n);
    // scanf("%d:%d",a,b);
    if(b>59)b=(b%10);
    if(n==24&&a>23){
        if(a%10)a=(a%10);
        else a=10;
    }
    else if(n==12&&(a>12||a==0)){
        if(a%10)a=(a%10);
        else a=10;
    }
    printf("%02d:%02d",a,b);
}