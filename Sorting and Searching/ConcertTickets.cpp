#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
     vector <int> arr;
    int arr2[m];
    int a;
    for(int x =0; x<n; x++)
    {
        cin>>a;
        arr.push_back(a);
    }
    for(int x =0; x<m; x++)
    {
        cin>>arr2[x];
    }
    sort(arr.begin(),arr.end());
    vector <int>::iterator indice;
    for(int x =0; x<m; x++)
    {
        indice=lower_bound(arr.begin(),arr.end(),arr[x]);
        if(arr[indice-arr.begin()]<=arr[x])
        {
            cout<<arr[indice-arr.begin()]<<" ";
            arr.erase(arr.begin()+*indice);
        }else{
            cout<<"-1 ";
        }
    }
}
