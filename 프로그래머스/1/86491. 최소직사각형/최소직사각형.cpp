#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int max_width = 0, max_height = 0;
    
    for (const auto &size : sizes) 
    {
        int width = size[0];
        int height = size[1];
        
        if (width < height)
        {
            swap(width, height);
        }
        max_width = max(max_width, width);
        max_height = max(max_height, height);
    }
    
    return max_width * max_height;
}