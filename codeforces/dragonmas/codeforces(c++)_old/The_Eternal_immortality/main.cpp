#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,s=1,i;
ll last_digit(ll a,ll b){
    for(i=b;i>a;i--){
        s*=i%10;
        s=s%10;
        if(s==0)return 0;
    }
    return s%10;
}
int main(){
    cin>>a>>b;cout<<last_digit(a,b);
}
