#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    int minn,maxx,mid;
    cin>>n;
    int arr[n];
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    int k=0,l=0,m=0;
        for(i=0 ; i<n ; i++)
        {
            if(arr[i]==1)
                k++;
            if(arr[i]==2)
                l++;
            if(arr[i]==3)
                m++;
        }
        if(k==0 || l==0 || m==0)
        cout<<"0"<<endl;
    else
    {
        int s,c;
        s=min(l,m);
        c=min(s,k);
        cout<<c<<endl;
        // This loop should run c times not s times
        // while(s--)
        while(c--)
        {
            for(i=0 ; i<n ; i++)
            {
                if(arr[i]==1)
                {
                    minn=i+1;
                    arr[i]=5;
                    break;
                }

            }
            for(i=0 ; i<n ; i++)
            {
                if(arr[i]==2)
                {
                    mid=i+1;
                    arr[i]=5;
                    break;
                }

            }
            for(i=0 ; i<n ; i++)
            {
                if(arr[i]==3)
                {
                    maxx=i+1;
                    arr[i]=5;
                    break;
                }

            }
            cout<<minn<<" "<<mid<<" "<<maxx<<endl;
        }

    }
    return 0;
}