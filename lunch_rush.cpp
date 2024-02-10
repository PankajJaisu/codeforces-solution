#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n,k,f,t;
    cin>>n>>k>>f>>t;
    int maxJoy,joy;
    if (t > k)
    {
        maxJoy = f - (t - k);
    }

    else
    {
        maxJoy = f;
    }
    while(--n){
        cin>>f>>t;
        if(t>k){
            joy = f - (t-k);
        }
        else {
            joy = f;
        }
        if(joy>maxJoy) {
            maxJoy = joy;
        }

    }
    cout<<maxJoy<<endl;
    return 0;
}

