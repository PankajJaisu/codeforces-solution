#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n,m,days = 0;
    cin>>n>>m;
    int socks = n;
    while (socks > 0)
    {
        days++;
        socks--;
        if(days%m == 0)
        {
            socks++;
        }
    }
    cout<<days<<endl;
    return 0;
}