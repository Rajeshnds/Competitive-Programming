#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++){
        if(a[i]==2)
        cout<<2<<endl;
else{
    if(a[i]%2==0)
        cout<<0<<endl;
        else
            cout<<1<<endl;
}
}
return 0;
}
