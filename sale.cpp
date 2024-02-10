#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int result = 0;
    sort(arr.begin(), arr.end());
    
    int c = 0;
    for(int i=0;i<n;i++){
        if (arr[i]<0 && c<m)
        {
            result-=arr[i];
            c+=1;
        }
        
    }

    cout<<result<<endl;

}
