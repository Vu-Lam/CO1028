#include <iostream>
#include <cstring>
using namespace std;
// Student may implement another function as need

void process(const char *str, char *outstr)
{
    // TODO
    int n;
    for (int i = strlen(str) - 1, j = 0; str[i] != '\0'; j++, i--)
    {
        outstr[j] = str[i];
        n = j;
    }
    outstr[n + 1] = '\0';
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "  this is my school   ";
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr << endl;
    return 0;
}