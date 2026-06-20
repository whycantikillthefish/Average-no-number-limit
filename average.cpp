#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, count = 0;
    while (cin >> n)
    {
        sum += n;
        count++;
    }
    if (count > 0)
        cout << (double)sum / count;
    return 0;
}