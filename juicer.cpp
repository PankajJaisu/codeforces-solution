#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n,b,d,sum = 0,result = 0;
    cin >> n >> b >> d;
    vector<int> in(n,0);
    for(int i = 0; i < n; i++){
        cin >> in[i];
    }
    int total_sum = 0;
   
    for(int i = 0; i < n; i++){
        if(in[i]<=b){
            total_sum += in[i];
        }
        if(total_sum>d){
            total_sum = 0;
            result++;
        }
    }
    cout<<result;
    return 0;
}