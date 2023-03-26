#include<bits/stdc++.h>
using namespace std;
int a,b,c;
void read(){
    cin>>a>>b>>c;
}
void solve(){
    if((a+b+c)%2||a+b<c||b+c<a||c+a<b)cout<<"Impossible";
    else{
        cout<<(a+b-c)/2<<" "<<(b+c-a)/2<<" "<<(c+a-b)/2;
    }
}
int main(){
    read();
    solve();
}
