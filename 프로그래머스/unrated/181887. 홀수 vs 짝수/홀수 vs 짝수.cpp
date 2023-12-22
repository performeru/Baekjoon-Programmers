#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
  int odd_sum = 0;
  int even_sum = 0;

  for (int i = 0; i < num_list.size(); i++) 
  {
    if (i % 2 == 1) 
    {
      odd_sum += num_list[i];
    }
  }

  for (int i = 0; i < num_list.size(); i++) 
  {
    if (i % 2 == 0)
    {
      even_sum += num_list[i];
    }
  }

  return max(odd_sum, even_sum);
}