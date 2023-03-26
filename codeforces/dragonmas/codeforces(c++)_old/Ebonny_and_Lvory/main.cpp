#include<bits/stdc++.h>
using namespace std;
int a,b,c;
string shots(){
    if(a>b)swap(a,b);
    if(c%a==0||c%b==0)return "YES";
    else{
        while(c%a!=0&&c>a)c-=b;
    }
    return c<a?"NO":"YES";
}
int main(){
    cin>>a>>b>>c;cout<<shots();
}
