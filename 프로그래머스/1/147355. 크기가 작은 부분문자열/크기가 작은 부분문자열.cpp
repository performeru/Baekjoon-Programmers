#include <string>
#include <vector>

using namespace std;

long long str_to_int(const string& s) 
{
    long long result = 0;
    
    for (char ch : s) 
    {
        result = result * 10 + (ch - '0');
    }
    return result;
}

int solution(string t, string p) 
{
    int count = 0;
    int len_p = p.length();
    long long num_p = str_to_int(p);
    
    for (int i = 0; i <= t.length() - len_p; ++i) 
    {
        string substr = t.substr(i, len_p);
        long long num_substr = str_to_int(substr);
        if (num_substr <= num_p)
        {
            count++;
        }
    }
    return count;
}