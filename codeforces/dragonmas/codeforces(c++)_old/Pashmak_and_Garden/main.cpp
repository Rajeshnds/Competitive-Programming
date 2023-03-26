#include<bits/stdc++.h>
using namespace std;
void tree_position(int x,int y,int a,int b){
    if(abs(x-a)==abs(y-b))cout<<x<<" "<<b<<" "<<a<<" "<<y;
    else if(x==a)cout<<x+b-y<<" "<<y<<" "<<a+b-y<<" "<<b;
    else if(y==b)cout<<x<<" "<<y+x-a<<" "<<a<<" "<<b+x-a;
    else cout<<-1;
}
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    tree_position(x,y,a,b);
}
