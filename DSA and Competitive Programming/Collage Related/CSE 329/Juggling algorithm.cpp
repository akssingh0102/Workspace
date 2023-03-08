//Array rotation - Juggling algorithm
//Time Complexity - O(n)
#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int d)
{
    if(d==0)
        return n;
    if(n%d==0)
        return d;
    return (n%d>d)?gcd(n%d, d):gcd(d,n%d);
}
void juggling(int a[],int n,int d)
{
    int g=gcd(n,d);

    for(int i=0;i<g;i++)
    {
        int temp=a[i];
        int j=i;
        int k=j+d;
        while(1)
        {
            if(k>=n)
            {
                k=k-n;
            }
            if(k==i)
                break;
            a[j]=a[k];
            j=k;
            k=j+d;
        }
        a[j]=temp;
    }
}
int main()
{

    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int d;
    cin>>d;
    d=d%n;
    juggling(a,n,d);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
