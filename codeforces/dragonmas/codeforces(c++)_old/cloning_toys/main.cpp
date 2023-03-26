#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    cin>>x>>y;
    cout<<((x==0&&y==1)||(y>1&&x-y+1>=0&&(x-y+1)%2==0)?"YES":"NO");
}
