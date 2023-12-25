#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    int last_num = num_list.back();
    
    if (num_list.size() >= 2 && last_num > num_list[num_list.size() - 2])
    { 
        num_list.push_back(last_num - num_list[num_list.size() - 2]);
    } 
    else 
    {
        num_list.push_back(last_num * 2);
    }

    return num_list;

}