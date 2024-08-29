#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    vector<int> numbers;
    stringstream ss(s);
    string temp;
    

    while (ss >> temp) 
    {
        numbers.push_back(stoi(temp)); 
    }
    
    int min_value = *min_element(numbers.begin(), numbers.end());
    int max_value = *max_element(numbers.begin(), numbers.end());
    
    return to_string(min_value) + " " + to_string(max_value);
}