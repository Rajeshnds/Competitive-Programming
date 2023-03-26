#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,m,l;
void walk(int a,int &m){
    if(a^b)m=max(m,++l);
    else l=1;
    b=a;
}
int main(){
    cin>>n>>k;
    while(n--){
        cin>>a;
        walk(a,m);
    }
    cout<<m;
}
