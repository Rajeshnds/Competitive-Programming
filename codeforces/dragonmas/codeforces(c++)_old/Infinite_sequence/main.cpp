#include<bits/stdc++.h>
using namespace std;
int a,b,c;
string favourite(int a,int b,int c){
    return a==b||(c!=0&&(b-a)%c==0&&(b-a)/c>0)?"YES":"NO";
}
int main(){
    cin>>a>>b>>c;cout<<favourite(a,b,c);
}
