#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    string S;
    cin >> S;

    vector<int> alphabetCount(26, 0);

    for (char c : S) 
    {
        alphabetCount[c - 'a']++; 
    }

    for (int count : alphabetCount) 
    {
        cout << count << " "; 
    }
    cout << "\n";

}