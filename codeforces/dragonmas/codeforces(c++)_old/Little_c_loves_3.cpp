#include<bits/stdc++.h>
using namespace std;
long long n,i;
main(){
cin>>n;
i=n/3;
if(i%3==0){
    if(n%3==0)cout<<i-1<<" "<<i-1<<" "<<i+2;
    if(n%3==1)cout<<i+1<<" "<<i-1<<" "<<i+1;
    if(n%3==2)cout<<i+2<<" "<<i-1<<" "<<i+1;
}
else if(i%3==1){
        if(n%3==0)cout<<i<<" "<<i<<" "<<i;
        if(n%3==1)cout<<i<<" "<<i<<" "<<i+1;
        if(n%3==2)cout<<i<<" "<<i+1<<" "<<i+1;
}
else if(i%3==2){
        if(n%3==0)cout<<i<<" "<<i<<" "<<i;
        if(n%3==1)cout<<i+2<<" "<<i-1<<" "<<i;
        if(n%3==2)cout<<i+2<<" "<<i<<" "<<i;
}
}
