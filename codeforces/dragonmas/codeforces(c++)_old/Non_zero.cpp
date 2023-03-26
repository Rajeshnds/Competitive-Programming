#include<iostream>
using namespace std;
int main(){
int n,k=0,s=0,a,i;
cin>>n;
while(n--){
    k=0;
    s=0;
    cin>>a;
    while(a--){
        cin>>i;
        if(i==0)
            k++;
        s+=i;
    }
    cout<<(s+k==0?k+1:k)<<endl;
}
return 0;
}
