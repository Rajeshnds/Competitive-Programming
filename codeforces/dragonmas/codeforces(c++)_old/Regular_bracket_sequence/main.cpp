#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int regular(){
    cin>>a>>b>>c>>d;
    if(c>0&&a+d==0)return 0;
    else if(a!=d)return 0;
    else return 1;
}
int main(){
    cout<<regular();
}
