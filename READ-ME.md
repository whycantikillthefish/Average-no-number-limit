This code is writen in c++.
Its purpose is to take all number given and calculate an average of them, without needing to do it manually on a calculator.
Once you have entered all your numbers, use control + D in order to output the average.

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
