#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int a,b;
    cin >>a >>b;
    int c = a+b;
    string s = to_string(c);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}