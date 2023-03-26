#include<bits/stdc++.h>
using namespace std;
#define y1 y
int x1,y1,x2,y2,x3,y3;
void read(){
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
}
void solve(){
    cout<<3<<endl<<x1+x2-x3<<" "<<y1+y2-y3<<endl
       <<x2+x3-x1<<" "<<y2+y3-y1<<endl
      <<x1+x3-x2<<" "<<y1+y3-y2;
}
int main(){
    read();
    solve();
}
