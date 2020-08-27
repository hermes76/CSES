#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string a;
    cin>>a;
    string b;
    cin>>b;
    int j,i;
    j=a.length();
    i=b.length();
    long long int hashing=0;
    long long int hashin=0;
    int res=0;
    for(int x=0; x<i; x++)
    {
        hashing+=b[x];
    }
    for(int x =0; x<=j-i; x++)
    {
        if(a[x]==b[0])
        {
            hashin=0;
            for(int y=x; y<i+x; y++)
            {
                hashin+=a[y];
            }
            if(hashin==hashing)
            {
                res++;
            }
        }
    }
    cout<<res;
}
