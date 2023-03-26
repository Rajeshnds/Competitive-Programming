#include<bits/stdc++.h>
using namespace std;
int m=1e9+7,k,r;
string s;
void solve(){
    char c;
    while(cin>>c){
        if(c=='b')k=r;
        else if(c=='a'){r+=k+1;if(r>=m)r=r-m;}
    }
    cout<<r;
}
int main(){
    solve();
}