#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n,m;
    vector<int> arr(n);
    int last;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(m>arr[i]){
            arr.remove(arr[i]);
        }
        else{
            diff = arr[i] - m;
            last = arr[i];
            vector.push_back(diff);

        }
    }

    return 0;
}