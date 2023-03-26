#include<bits/stdc++.h>
using namespace std;
int a,c,b,t=1;
int find_b(){
    cin>>a>>c;
    for(;a||c;a/=3,c/=3,t*=3)b+=((c%3-a%3+3)%3)*t;
    return b;
}
int main(){
    cout<<find_b();
}
