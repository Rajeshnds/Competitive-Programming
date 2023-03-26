#include<bits/stdc++.h>
using namespace std;
int n,d,m,x,y;
string grasshopper(int x,int y,int n,int d){
    return x+y>=d&&x+y<=2*n-d&&y-x>=-d&&y-x<=d?"YES":"NO";
}
int main(){
    cin>>n>>d>>m;
    while(m--)cin>>x>>y,cout<<grasshopper(x,y,n,d)<<endl;
}
