#include <iostream>
#include <unordered_map>
#include <map>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int number;
    cin >> number;

    unordered_map<string, int> book_count;
    
    string name;
    for (int i = 0; i < number; i++) 
    {
        cin >> name;
        book_count[name]++;  
    }

    map<string, int> sorted_books;
    for (const auto& book : book_count) 
    {
        sorted_books[book.first] = book.second;
    }

    string best_seller;
    int max_count = 0;

    for (auto& book : sorted_books) 
    {
        if (book.second > max_count) 
        {
            max_count = book.second;
            best_seller = book.first;
        }
    }

    cout << best_seller << '\n';
}
