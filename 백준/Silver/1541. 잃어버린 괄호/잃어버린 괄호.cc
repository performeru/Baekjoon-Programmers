#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int min_expression_result(const string& expression) 
{
    vector<int> numbers;
    stringstream ss(expression);
    string part;

    while (getline(ss, part, '-')) 
    {
        stringstream add_part(part);
        string num;
        int sum = 0;

        while (getline(add_part, num, '+')) 
        {
            sum += stoi(num);
        }
        
        numbers.push_back(sum);
    }

    int result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) 
    {
        result -= numbers[i];
    }

    return result;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string expression;
    cin >> expression;
    cout << min_expression_result(expression) << '\n';
}
