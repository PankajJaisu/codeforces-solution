#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int> temp(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>temp[i];
        sum+=temp[i];
    }
    int result;
    sum = sum + (n-1)*10;
    if(sum>d)
        cout<<"-1";
    else
    {
        result+=1;
        

    }
    return 0;
}