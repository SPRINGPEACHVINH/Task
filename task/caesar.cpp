#include <iostream>
#include <string>
using namespace std;
int main()
{
    string chars;
    int k;
    getline(cin, chars);
    cin >> k;
    k%=26;
    for (int i = 0; i < (int)chars.length(); ++i)
    {
        if (isspace(chars[i]))
        {
            cout << " ";
            continue;
        }
        if ((int)chars[i] >= 'a' && (int)chars[i] <= 'z')
        {
            chars[i] = (chars[i] + k)%26;
            if ((int)chars[i] > 'z')
                chars[i] = (chars[i] - 26);
        }
        else if ((int)chars[i] >= 'A' && (int)chars[i] <= 'Z')
        {
            chars[i] += k;
            if ((int)chars[i] > 'Z') 
                chars[i] -= 26;
        }
        cout << chars[i];
    }
}
