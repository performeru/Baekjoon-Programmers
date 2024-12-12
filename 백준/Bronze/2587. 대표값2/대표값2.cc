#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> numbers(5);
    
    for(int i = 0 ; i < 5; i++)
    {
        cin >> numbers[i];
    }
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    int average = sum / 5;
    
    sort(numbers.begin(), numbers.end()); 
    int mid = numbers[2];
    
    cout << average << '\n';
    cout << mid << '\n'; 
     
}