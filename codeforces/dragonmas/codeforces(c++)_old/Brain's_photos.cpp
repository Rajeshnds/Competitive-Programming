#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,b=1;
char a;
cin>>n>>m;
n*=m;
while(n--){
    cin>>a;
    if(a=='C'||a=='M'||a=='Y')
        {cout<<"#Color";b=0;break;}
}
if(b)
    cout<<"#Black&White";
return 0;
}
