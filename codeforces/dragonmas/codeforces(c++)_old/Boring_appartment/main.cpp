#include<bits/stdc++.h>
using namespace std;
int t;
string x;
int boring(string x){
    int a=x[0]-48;
    return (a-1)*10+(x.size()*(x.size()+1)/2);
}
int main(){
    for(cin>>t;t--;)cin>>x,cout<<boring(x)<<endl;
}
