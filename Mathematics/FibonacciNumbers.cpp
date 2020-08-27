#include <iostream>
int main()
{
    long long int n;
    std::cin>>n;
    long long int a,b,c;
    a=0;
    b=1;
    for(int x=2; x<=n; x++)
    {
        c=a+b;
        c%=1000000007;
        a=b;
        b=c;
    }
    std::cout<<c;
}
