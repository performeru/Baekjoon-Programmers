#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    int binary_count = 0; 
    int zero_removed = 0;   

    while (s != "1") 
    {
        int zero_count = 0;
        string temp = "";
        
        for (char c : s) 
        {
            if (c == '0') 
            {
                zero_count++;
            } 
            else 
            {
                temp += c; 
            }
        }
        zero_removed += zero_count;

        int length = temp.size();
        s = "";
        
        while (length > 0) 
        {
            s = char((length % 2) + '0') + s; 
            length /= 2;
        }

        binary_count++;
    }

    return {binary_count, zero_removed};
}