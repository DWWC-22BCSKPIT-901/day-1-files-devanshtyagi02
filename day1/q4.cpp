#include <iostream>
#include <math.h>

using namespace std;
bool prime(int n)
{
    int limit=sqrt(n);
    for(int i=1;i<=limit;i++) if(n%i==0) return false;
        

    return true;
}
int main()
{
    int n=79;
    if(prime(n)) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}