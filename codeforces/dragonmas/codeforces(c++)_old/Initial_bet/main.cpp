#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int bet(){
    cin>>a>>b>>c>>d>>e;
    a+=b+c+d+e;
    return a==0||a%5?-1:a/5;
}
int main(){
    cout<<bet();
}
