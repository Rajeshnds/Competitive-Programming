#include<bits/stdc++.h>
using namespace std;
int a,b,k;
int charge(){
    cin>>a>>b;
    while(a+b>2&&a>0&&b>0){
        if(b>=a)b-=2,a++;
        else if(a>b)a-=2,b++;
        k++;
    }
    return k;
}
int main(){
    cout<<charge();
}
