#include<bits/stdc++.h>
using namespace std;
int n,x,a,b,m,l=1002;
void center(int a,int b,int &m,int &l){
    m=max(m,a);l=min(l,b);
}
int main(){
    cin>>n>>x;
    while(n--){
        cin>>a>>b;
        if(a>b)swap(a,b);
        center(a,b,m,l);
    }
    cout<<(m>l?-1:x<m?m-x:x>l?x-l:0);
}
