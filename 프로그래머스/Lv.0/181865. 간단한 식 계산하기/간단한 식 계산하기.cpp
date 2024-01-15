#include <string>
#include <sstream>

using namespace std;

int solution(string binomial) 
{
       stringstream ss(binomial);

    int a, b;
    char op;

    ss >> a >> op >> b;

    int result;
    
    switch (op) 
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        default:
            result = 0;
            break;
    }

    return result;

}