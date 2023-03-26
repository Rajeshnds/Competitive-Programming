#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,k=0,max=0;
cin>>n;
while(n--){
    cin>>a>>b;
    k+=b-a;
    if(k>max)
        max=k;

}
cout<<max;
return 0;
}
