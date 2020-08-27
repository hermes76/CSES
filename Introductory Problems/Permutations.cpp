#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int aux=0;
    if(n>=5)
    {
        if(n%2!=0)
        {
            aux=1;
        }
        for(int x =n-aux; x>1; x-=2)
        {
            cout<<x<<" ";
        }
        aux=0;
        if(n%2==0)
        {
            aux=1;
        }
        for(int x=n-aux; x>0; x-=2)
        {
            cout<<x<<" ";
        }
    }else if(n==1){
        cout<<1;
    }else if(n==4)
    {
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }else{
         cout<<"NO SOLUTION";
    }
}
