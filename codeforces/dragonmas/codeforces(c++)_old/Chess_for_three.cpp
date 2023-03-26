#include<bits/stdc++.h>
using namespace std;
int n,b=3,a;
main(){
cin>>n;
while(n--){
    cin>>a;
    if(a==b)return cout<<"NO",0;
    b=6-a-b;
}
cout<<"YES";
}
