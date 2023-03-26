#include<bits/stdc++.h>
using namespace std;
int t,a,b;
int emerland(int a,int b){
    return min(a,min(b,(a+b)/3));
}
int main(){
    for(cin>>t;t--;)cin>>a>>b,cout<<emerland(a,b)<<endl;
}
