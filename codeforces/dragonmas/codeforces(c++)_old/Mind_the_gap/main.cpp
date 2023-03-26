#include<bits/stdc++.h>
using namespace std;
int h,m,n,s,a;
void takeoff_time(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>h>>m;
        if(a+s<h*60+m)break;
        a=h*60+m+s+1;
    }
    cout<<a/60<<" "<<a%60;
}
int main(){
    takeoff_time();
}
