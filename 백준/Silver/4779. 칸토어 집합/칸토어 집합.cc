#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void generateCantorSet(string &result, int start, int length) 
{
    if (length == 1) 
    {
        return; 
    }
    
    int partition = length / 3; 

    for (int i = start + partition; i < start + 2 * partition; i++) 
    {
        result[i] = ' ';
    }

    generateCantorSet(result, start, partition);
    generateCantorSet(result, start + 2 * partition, partition);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    
    while (cin >> N) 
    { 
        int length = pow(3, N); 
        string result(length, '-'); 
        generateCantorSet(result, 0, length); 
        cout << result << '\n'; 
    }

}
