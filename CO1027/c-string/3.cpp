#include <iostream>
#include <cstring>
using namespace std;
// Student may implement another function as need
int power(int a, int b)
{
    int x = 1;
    for (int i = 1; i <= b; i++)
    {
        x *= a;
    }
    return x;
}
int calc(char str[])
{
    // TODO
    int n = strlen(str) - 1;
    int sum = 0;
    for (int i = n, j = 0; 0 <= i; i--, j++)
    {
        sum += power(2, j) * (int(str[i]) - 48);
    }
    return sum;
}
int main()
{
    char str[] = "001011";
    cout << calc(str) << endl;
}