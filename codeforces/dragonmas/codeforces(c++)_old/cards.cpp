#include<iostream>
using namespace std;
int main(){
    char s;
int n,k=0,l=0;
cin>>n;
while(n>0){
    cin>>s;
    if(s=='n')
        k+=1;
    if(s=='z')
        l+=1;
        n--;
}
for(int i=1;i<=k;i++)
    cout<<"1 ";
for(int i=1;i<=l;i++)
    cout<<"0 ";
return 0;

}
