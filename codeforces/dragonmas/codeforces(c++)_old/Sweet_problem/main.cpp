#include<bits/stdc++.h>
using namespace std;
int t,r,g,b;
int candies(int r,int g,int b){
    return min((r+g+b)/2,r+g+b-max(r,max(g,b)));
}
int main(){
    for(cin>>t;t--;)cin>>r>>g>>b,cout<<candies(r,g,b)<<endl;
}
