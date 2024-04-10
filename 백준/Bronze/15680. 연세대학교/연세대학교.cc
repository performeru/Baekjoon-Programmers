#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if (N == 0) 
    {
        cout << "YONSEI" << endl;
    } 
    else if (N == 1) 
    {
        cout << "Leading the Way to the Future" << endl;
    }
    else
    {
        cout << "잘못된 입력입니다. N은 0 또는 1이어야 합니다." << endl;
    }
}