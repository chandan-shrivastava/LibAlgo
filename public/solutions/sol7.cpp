#include <bits/stdc++.h>
using namespace std;
int fib(int number)
{
    size_t index;
    vector<int> integers;

    if (number == 0 || number == 1)
        return number;

    index = 0;
    integers.push_back(0);
    integers.push_back(1);

    for (int n = 2; n <= number; n++)
        integers[index++ % 2] = integers[1] + integers[0];

    return integers[--index % 2];
}
int main()
{
    int number;
    cin >> number;
    fib(number);
    cout << number << endl;
    return 0;
}