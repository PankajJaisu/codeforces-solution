#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n > 9)
    {
        n = n + 1 - (n % 10); // Equivalent to the sum of digits
        n /= 10;
        count++;
    }

    cout << count << endl;

    return 0;
}
