#include<bits/stdc++.h>
using namespace std;
int d,n;
main(){
    cin>>n;if(n==0)cout<<"O-|-OOOO";
while(n){
    string s="OO|OOOOO";
    d=n%10;
    n/=10;
    s[d<5?1:0]='-';
    s[3+d%5]='-';
cout<<s<<endl;
}
}
