#include <string>

using namespace std;

int solution(int n, string control) 
{
    for(auto cmd : control)
    {
        switch(cmd)
        {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
        }
    }
    return n;
}