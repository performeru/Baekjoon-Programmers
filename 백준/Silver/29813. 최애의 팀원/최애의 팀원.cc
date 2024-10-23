#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    queue<pair<string, int>> students;

    for (int i = 0; i < N; i++) 
    {
        string name;
        int number;
        cin >> name >> number;
        students.push({name, number});
    }

    while (students.size() > 1) 
    {
        auto current_student = students.front();
        students.pop();

        int pass_count = current_student.second - 1; 

        for (int i = 0; i < pass_count; i++) 
        {
            students.push(students.front()); 
            students.pop();
        }

        students.pop();
    }

    cout << students.front().first << "\n";

}
