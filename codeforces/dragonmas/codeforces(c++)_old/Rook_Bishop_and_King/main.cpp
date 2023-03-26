#include<bits/stdc++.h>
using namespace std;
int r,c,a,b;
void no_of_moves(){
    cin>>r>>c>>a>>b;
    cout<<(r==a||c==b?1:2)<<" "<<(abs(r-a)==abs(c-b)?1:(abs(r-a)+abs(c-b))%2==0?2:0)<<" "<<max(abs(r-a),abs(c-b));
}
int main(){
    no_of_moves();
}
