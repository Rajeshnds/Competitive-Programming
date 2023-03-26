#include<bits/stdc++.h>
using namespace std;
int n,m,r,k,z=1;
int main(){
    cin>>m>>n;
    if(m>n+1||n>m*2+2)return cout<<-1,0;
    while(n||m){
        if((n>m&&k<2)||z==0)n--,z=1,k++;
        else m--,z=0,k=0;
        cout<<z;
    }
}