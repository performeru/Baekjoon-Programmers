#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int aSize, bSize;
    cin >> aSize >> bSize;

    unordered_set<int> setA, setB;
    int element;

    for (int i = 0; i < aSize; ++i) 
    {
        cin >> element;
        setA.insert(element);
    }

    for (int i = 0; i < bSize; ++i) 
    {
        cin >> element;
        setB.insert(element);
    }

    int symmetricDifferenceCount = 0;

    for (const int& item : setA) 
    {
        if (setB.find(item) == setB.end()) 
        {
            symmetricDifferenceCount++;
        }
    }

    for (const int& item : setB) 
    {
        if (setA.find(item) == setA.end()) 
        {
            symmetricDifferenceCount++;
        }
    }

    cout << symmetricDifferenceCount << '\n';

}