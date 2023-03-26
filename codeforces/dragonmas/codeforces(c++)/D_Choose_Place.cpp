#include<bits/stdc++.h>
using namespace std;
char c[10][10];
void solve(){
    int p=0,q=0;
    for(int i=1;i<=6;i++){
        if(c[i][3]=='.')p=i,q=3;
        else if(c[i][4]=='.')p=i,q=4;
        if(p)break;
    }
    if(!p){
        for(int i=1;i<=6;i++){
            if(c[i][0]=='.')p=i,q=0;
            else if(c[i][1]=='.')p=i,q=1;
            else if(c[i][6]=='.')p=i,q=6;
            else if(c[i][7]=='.')p=i,q=7;
            if(p)break;
        }
    }
    c[p][q]='P';
    for(int i=1;i<=6;i++)cout<<c[i]<<endl;
}
int main(){
    for(int i=1;i<=6;i++){
        cin>>c[i];
    }
    solve();
}