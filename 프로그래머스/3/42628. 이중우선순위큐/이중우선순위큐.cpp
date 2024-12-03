#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> operations) 
{
    priority_queue<int> maxHeap; 
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    unordered_map<int, int> count; 

    for (const auto& op : operations) 
    {
        char command = op[0];
        int number = stoi(op.substr(2)); 

        if (command == 'I') 
        {
            maxHeap.push(number);
            minHeap.push(number);
            count[number]++;
        } 
        else if (command == 'D') 
        {
            if (number == 1) 
            {
                while (!maxHeap.empty() && count[maxHeap.top()] == 0) 
                {
                    maxHeap.pop(); 
                }
                if (!maxHeap.empty()) 
                {
                    int top = maxHeap.top();
                    maxHeap.pop();
                    count[top]--;
                }
            } 
            else if (number == -1) 
            {
                while (!minHeap.empty() && count[minHeap.top()] == 0) 
                {
                    minHeap.pop(); 
                }
                if (!minHeap.empty()) 
                {
                    int top = minHeap.top();
                    minHeap.pop();
                    count[top]--;
                }
            }
        }
    }

    while (!maxHeap.empty() && count[maxHeap.top()] == 0) 
    {
        maxHeap.pop();
    }
    while (!minHeap.empty() && count[minHeap.top()] == 0) 
    {
        minHeap.pop();
    }

    if (maxHeap.empty() || minHeap.empty()) 
    {
        return {0, 0};
    }
    else 
    {
        return {maxHeap.top(), minHeap.top()};
    }
}
