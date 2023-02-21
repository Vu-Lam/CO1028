#include <iostream>
#include <cstring>
using namespace std;
// Student may implement another function as need
void deleteElement(char str[], int n)
{
    for (int i = n; i < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
}
void process(char str[], char outstr[])
{
    // TODO
    while (str[0] == ' ')
        deleteElement(str, 0);
    while (str[strlen(str) - 1] == ' ')
    {
        deleteElement(str, strlen(str) - 1);
    }
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            deleteElement(str, i + 1);
        }
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != '\0')
            outstr[i] = str[i];
    }
    if (outstr[strlen(outstr) - 1] == ' ')
    {
        outstr[strlen(outstr) - 2] == '\0';
    }
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  ";
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr << endl;
    cout << "Test \n";
    cout << strlen(outstr) << endl;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
            cout << "phan tu so " << i << " loi \n";
    }
    return 0;
}