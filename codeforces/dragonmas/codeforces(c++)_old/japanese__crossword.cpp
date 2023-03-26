#include<iostream>
using namespace std;
int main(){
int n,b[101],k=0,j=0;
string s;
cin>>n>>s;
for(int i=0;i<n;i++)
    if(s[i]=='B')
        k++;
    else if(k){
        b[j++]=k;
        k=0;
    }
if(k)
b[j++]=k;
cout<<j<<endl;
for(int i=0;i<j;i++)
    cout<<b[i]<<" ";
return 0;
}
