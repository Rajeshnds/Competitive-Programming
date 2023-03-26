#include<bits/stdc++.h>
using namespace std;
int n;
int count(int x){
    if(x>n)return 0;
    return 1+count(10*x)+count(10*x+1);
}
int main(){
    cin>>n;
    cout<<count(1);
}
