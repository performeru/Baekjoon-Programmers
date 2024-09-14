#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b, int n) 
{
    if (a[n] == b[n]) 
    {
        return a < b;
    }
    
    return a[n] < b[n];
}

vector<string> solution(vector<string> strings, int n) 
{   
    sort(strings.begin(), strings.end(), [n](const string& a, const string& b) 
    {
        return compare(a, b, n);
    });
    
    return strings;
    
}