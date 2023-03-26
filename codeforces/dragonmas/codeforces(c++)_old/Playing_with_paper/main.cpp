#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,s,t;
ll paper(ll a,ll b){
    while(b)s+=a/b,t=a%b,a=b,b=t;
    return s;
}
int main(){
    cin>>a>>b,cout<<paper(a,b);
}
