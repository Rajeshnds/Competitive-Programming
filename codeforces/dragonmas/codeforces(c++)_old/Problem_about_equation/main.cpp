#include<bits/stdc++.h>
using namespace std;
double n,f,b,s,a[101];
void pour_drink(int n,int b){
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    s=(s+b)/n;
    for(int i=0;i<n;i++){
        if(a[i]>s)f=1;
    }
    if(f)cout<<-1;
    else for(int i=0;i<n;i++)printf("%.61f\n",s-a[i]);
}
int main(){
    cin>>n>>b;pour_drink(n,b);
}
