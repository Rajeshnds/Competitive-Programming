#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[20];
    int price,gst=0,total=0;
    printf("\nBilling software cafe coffee day-ccd\n");
    printf("\n*****************************************\n");
    printf("\nEnter the name of the item: ");
    scanf("%s",&a);
    printf("\nEnter the price of the item: ");
    scanf("%d",&price);
    gst=(price/100)*18;
    total=price+gst;
    printf("\n\ncafe coffee day\n\n");
    printf("*******************************************\n");
    printf("\nItem     price       gst      total\n");
    printf("\n%s       %d          %d       %d\n",a,price,gst,total);
    printf("\n*****************************************\n");
    printf("\nThank You! Do visit again!");
    return 0;
}