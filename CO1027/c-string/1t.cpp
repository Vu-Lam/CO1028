#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  ";
    char outstr[MAX_SIZE];
    cout << strlen(str) << endl;
    cout << str[2] << endl
         << endl;
    if (str[0] == ' ')
        cout << "Được mà \n";
    if (outstr[0] == '\0')
        cout << "OK \n";
    cout << endl;
    // process(str, outstr);
    // cout << outstr;
    return 0;
}