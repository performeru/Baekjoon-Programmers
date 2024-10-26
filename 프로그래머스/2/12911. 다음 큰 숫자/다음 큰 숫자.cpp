#include <string>
#include <vector>

using namespace std;

int countOnes(int num) 
{
    int count = 0;
    while (num) 
    {
        count += num & 1; 
        num >>= 1;        
    }
    return count;
}

int solution(int n) 
{
    int originalCount = countOnes(n); 
    int nextNum = n + 1;

    while (true) 
    {
        if (countOnes(nextNum) == originalCount)
        {
            return nextNum; 
        }
        nextNum++;
    }
}