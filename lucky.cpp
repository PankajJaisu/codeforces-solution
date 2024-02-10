#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    

    while(n--){
        int sum2 = 0;
        int sum1 = 0;
        int temp;
        cin>>temp;
        sum1+= temp%10;
        temp = temp/10;
        // cout << temp << endl;

        sum1 += temp % 10;
        temp = temp / 10;
        // cout << temp << endl;

        sum1 += temp % 10;
        temp = temp / 10;
        // cout << temp << endl;

        sum2 += temp % 10;
        temp = temp / 10;
        // cout << temp << endl;

        sum2 += temp % 10;
        temp = temp / 10;
        // cout << temp << endl;

        sum2 += temp % 10;
        temp = temp / 10;
        // cout << temp << endl;

        if(sum1==sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}