#include<bits/stdc++.h>
using namespace std;
int n,k,j=0;
main(){
cin>>n>>k;
while(n--){
    cout<<char(96+(++j));
    if(j==k)j=0;
}
}
