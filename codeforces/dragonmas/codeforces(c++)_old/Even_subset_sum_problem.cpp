#include<iostream>
using namespace std;
int main(){
int t,n,a;
cin>>t;
while(t--){
    cin>>n;
    int flag=0;
for(int i=1;i<=n;i++){
    cin>>a;
    if(a%2==0)
        flag=i;
}
if(flag)
    cout<<"1"<<endl<<flag<<endl;
else if(n>1)
        cout<<"2"<<endl<<"1 2"<<endl;
else
    cout<<"-1"<<endl;
}
return 0;
}
