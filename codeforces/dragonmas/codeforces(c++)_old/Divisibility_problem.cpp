#include<bits/stdc++.h>
using namespace std;
long long n,a,b;
main(){
cin>>n;
while(n--){
    cin>>a>>b;
    cout<<(a%b==0?0:b-(a%b))<<endl;
}
return 0;
}
