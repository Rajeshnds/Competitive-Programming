#include<bits/stdc++.h>
using namespace std;
int a,b,n,m,k,l,d;
int main(){
    cin>>a>>b;
    while(true){
        if(a%2==0)a/=2,k++;
        else if(a%3==0)a/=3,l++;
        else if(a%5==0)a/=5,d++;
        else break;
    }
    while(true){
        if(b%2==0)b/=2,k--;
        else if(b%3==0)b/=3,l--;
        else if(b%5==0)b/=5,d--;
        else break;
    }
    if(a!=b)cout<<-1;
    else cout<<abs(k)+abs(l)+abs(d);
}