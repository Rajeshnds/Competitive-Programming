#include<bits/stdc++.h>
using namespace std;
int k;
void read(){
    cin>>k;
}
void solve(){
    if(k>36)cout<<-1;
    else{
        if(k==1)cout<<4;
        else{
            for(int i=1;i<=k/2;i++)cout<<8;
            if(k%2)cout<<0;
        }
    }
}
int main(){
    read();
    solve();
}
