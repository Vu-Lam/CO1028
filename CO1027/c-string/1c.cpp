#include <iostream>
#include <cstring>
using namespace std;
// Student may implement another function as need
void process(const char str[], char outstr[])
{
    // TODO
    int n = 0;
    bool prev_space = true;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (!prev_space && n > 0)
            {
                outstr[n] = ' ';
                n++;
            }
            prev_space = true;
        }
        else
        {
            outstr[n] = str[i];
            n++;
            prev_space = false;
        }
    }
    if (prev_space && n > 0)
    {
        n--;
    }
    cout << strlen(outstr) << endl;
    outstr[n] = '\0';
    cout << n << endl;
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  ";
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr << endl;
    return 0;
}