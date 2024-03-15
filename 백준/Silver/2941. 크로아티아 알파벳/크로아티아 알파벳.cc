#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word;
    int len, count;

    cin >> word;

    len = word.length();
    count = len;

    for (int i = 0; i < count; i++)
    {
        if (word[i] == 'c')
        {
            if (word[i + 1] == '=' || word[i + 1] == '-')
            {
                len -= 1;
            }
        }
        else if (word[i] == 'd')
        {
            if (word[i + 1] == 'z')
            {
                if (word[i + 2] == '=')
                {
                    len -= 1;
                }
            }
            else if (word[i + 1] == '-')
            {
                len -= 1;
            }
        }
        else if (word[i] == 'j')
        {
            if (i > 0 && (word[i - 1] == 'l' || word[i - 1] == 'n'))
            {
                len -= 1;
            }
        }
        else if (word[i] == '=')
        {
            if (i > 0 && (word[i - 1] == 's' || word[i - 1] == 'z'))
            {
                len -= 1;
            }
        }
    }

    cout << len;

}