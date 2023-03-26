#include<bits/stdc++.h>
using namespace std;
int a[10],s;
void magic_square(){
    for(int i=1;i<=9;i++)cin>>a[i],s+=a[i];
    cout<<s/2-a[2]-a[3]<<" "<<a[2]<<" "<<a[3]<<endl<<a[4]<<" "<<s/2-a[4]-a[6]<<" "<<a[6]<<endl<<a[7]<<" "<<a[8]<<" "<<s/2-a[7]-a[8];
}
int main(){
    magic_square();
}
