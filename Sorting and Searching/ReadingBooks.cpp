#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int x =0; x<n; x++)cin>>arr[x];
    sort(arr,arr+n);
    int a,b;
    a=0;
    b=n-1;
    int suma=0;
    int suma2=0;
    int res=0;
    while(a<b)
    {
        for(a; a<n-1 and suma<arr[b];a++)
        {
            if(a==b)continue;
            suma+=arr[a];
        }
        res+=arr[b];
        suma-=arr[b];
        b--;
    }
    if(suma>0)
    arr[a]=suma;
    if(a==b and suma <=0)
    {
        a++;
    }
    if(a==b and suma>0)
    {
        b--;
    }
    while(b>=0)
    {
        for(b; b>=0 and suma2<arr[a]; b--)
        {
            suma2+=arr[b];
        }
        res+=arr[a];
        suma2-=arr[a];
        if(a<n-1)a++;
    }
    suma=0;
    while(a<n-1)
    {
        for(a; a<n-1 and suma<arr[b];a++)
        {
            suma+=arr[a];
        }
        if(suma2>0)
        {
            res-=suma2;
        }
        res+=suma;
    }
    cout<<res;
}
