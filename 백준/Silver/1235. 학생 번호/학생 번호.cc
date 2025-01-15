#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<string> studentNumbers(N);
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> studentNumbers[i];
    }

    int length = studentNumbers[0].size();

    for (int k = 1; k <= length; k++) 
    {
        unordered_set<string> uniqueNumbers;
        bool isUnique = true;

        for (const auto& number : studentNumbers) 
        {
            string suffix = number.substr(length - k, k);
            
            if (uniqueNumbers.count(suffix)) 
            {
                isUnique = false;
                break;
            }
            uniqueNumbers.insert(suffix);
        }

        if (isUnique) 
        {
            cout << k << endl;
            return 0;
        }
    }

}
