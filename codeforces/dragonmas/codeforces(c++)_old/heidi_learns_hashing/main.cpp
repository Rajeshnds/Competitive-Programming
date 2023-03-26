#include<bits/stdc++.h>
using namespace std;
long long r;
int main(){
    cin>>r;
    if(r%2==0||r<=3)cout<<"NO";
    else{
        cout<<1<<" "<<(r-3>>1);
    }
}
