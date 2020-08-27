#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int x=0; x<n; x++)
    {
        cin>>arr[x];
    }
    long long cuenta=0;
    int indice=0;
    int res=0;
    while(cuenta<m and indice<n)
    {
        cuenta+=arr[indice];
        indice++;
    }
    if(cuenta==m)
    {
        res++;
    }
    int indice2=0;
    while(indice2+1<n)
    {
        if(cuenta>=m)
        {
        cuenta-=arr[indice2];
        indice2++;
        }

        if(cuenta<m and indice<n)
        {
            cuenta+=arr[indice];
            indice++;
        }
        if(cuenta==m)
        {
            res++;
        }
    }
    cout<<res;
}
