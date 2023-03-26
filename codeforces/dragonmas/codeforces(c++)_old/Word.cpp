#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0,l=0,i;
char c[101];
cin>>c;
for(i=0;c[i]!='\0';i++);
for(int j=0;j<i;j++){
    if(c[j]>=97)
        k++;
    else
        l++;
}
if(k>=l){
    for(int j=0;j<i;j++)
    if(c[j]<97)
    c[j]+=32;
}
else
    for(int j=0;j<i;j++)
    c[j]=toupper(c[j]);
cout<<c;
return 0;
}
