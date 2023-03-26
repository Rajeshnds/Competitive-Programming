#include<bits/stdc++.h>
using namespace std;
int t,n,x;
int no_of_floor(){
    cin>>n>>x;
    if(n>2)return (n-2+x-1)/x+1;
    return 1;
}
int main(){
    for(cin>>t;t--;)cout<<no_of_floor()<<endl;
}
