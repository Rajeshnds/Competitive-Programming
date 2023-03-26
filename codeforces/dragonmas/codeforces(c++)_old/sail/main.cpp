#include<bits/stdc++.h>
using namespace std;
int t,sx,sy,dx,dy;
string s;
void read(){
    cin>>t>>sx>>sy>>dx>>dy>>s;
}
int solve(){
    for(int i=0;i<t;i++){
        if(dx<sx&&s[i]=='W')dx++;
        else if(dx>sx&&s[i]=='E')dx--;
        else if(dy<sy&&s[i]=='S')dy++;
        else if(dy>sy&&s[i]=='N')dy--;
        if(dx==sx&&dy==sy)return i+1;
    }
    return -1;
}
int main(){
    read();
    cout<<solve();
}
