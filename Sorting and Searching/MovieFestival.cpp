#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct dat
{
    int a,b;
};
bool comp(dat a, dat b)
{
    if(a.b-a.a==b.b-b.a)
    {
        return a.a<b.a;
    }
    return a.b-a.a<b.b-b.a;
}
vector <dat> vect;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    dat arr[n];
    for(int x=0; x<n; x++)
    {
        cin>>arr[x].a;
        cin>>arr[x].b;
    }
    sort(arr,arr+n,comp);
    int indice=0;
    int cuenta=0;
    vector <day>::iterator it;
    for(int x =0; x<n; x++)
    {
        for(it=vect.begin(); it!=vect.end(); it++)
        {
            if(*it.a
        }
    }
    cout<<cuenta;
}