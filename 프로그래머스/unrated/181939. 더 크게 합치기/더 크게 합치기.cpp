#include <iostream>
#include <string>
using namespace std;


int concatenateAndCompare(int x, int y) 
{
    string xy = to_string(x) + to_string(y);
    string yx = to_string(y) + to_string(x);

    return max(stoi(xy), stoi(yx));
}

int solution(int a, int b) 
{
    return concatenateAndCompare(a, b);
}