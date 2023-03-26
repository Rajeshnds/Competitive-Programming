#include<bits/stdc++.h>
using namespace std;
int n,x,a,b;
string find_dice(){
    cin>>n>>x;
    while(n--){cin>>a>>b;if(a==x||a==7-x||b==x||b==7-x)return "NO";}
    return "YES";
}
int main(){
    cout<<find_dice();
}
