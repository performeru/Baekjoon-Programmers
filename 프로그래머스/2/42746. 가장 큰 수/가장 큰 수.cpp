#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    return (a + b) > (b + a);
}

string solution(vector<int> numbers)
{
    vector<string> str_numbers;
    for (int num : numbers)
    {
        str_numbers.push_back(to_string(num));
    }

    sort(str_numbers.begin(), str_numbers.end(), compare);

    if (str_numbers[0] == "0")
    {
        return "0";
    }

    string answer = "";
    for (const string& s : str_numbers)
    {
        answer += s;
    }

    return answer;
}