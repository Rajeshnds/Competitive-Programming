#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,d;
int time(){
    cin>>a>>b>>c>>d;
    return abs(c-a)+abs(d-b)+(a==c||b==d?0:2);
}
int main(){
    for(cin>>t;t--;)cout<<time()<<endl;
}
