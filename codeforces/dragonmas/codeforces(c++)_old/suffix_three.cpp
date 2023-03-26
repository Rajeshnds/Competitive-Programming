#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
string s,t[2000];
while(n){
    cin>>s;
    int k=s.size();
    if(s[k-1]=='a')
        t[n]="KOREAN";
    if(s[k-1]=='u')
        t[n]="JAPANESE";
    if(s[k-1]=='o')
        t[n]="FILLIPINO";
        n--;
}
while(n)
    cout<<t[n]<<endl;
n--;
return 0;
}
