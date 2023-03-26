#include<bits/stdc++.h>
using namespace std;
int a,b,c,i;
int main(){
    cin>>a>>b>>c;
    a=a%b;
    while(i<1000000){
        i++;
        a*=10;
        if(a/b==c)return cout<<i,0;
        a%=b;
    }
    cout<<-1;


}