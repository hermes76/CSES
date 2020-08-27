#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    std::ios_base::sync_with_stdio(false);
    int n;
    long long int a,b,num;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        {
            if(a%2 ==0)
            {
                num=a*a-b+1;
            }else{
                num=(a-1)*(a-1)+b;
            }
        }else{
            if(b%2 ==1)
            {
                num=b*b-a+1;
            }else{
                num=(b-1)*(b-1)+a;
            }
        }
        cout<<num<<endl;


    }
}
