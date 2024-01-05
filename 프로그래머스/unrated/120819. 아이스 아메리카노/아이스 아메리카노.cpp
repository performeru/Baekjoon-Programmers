#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) 
{
    vector<int> answer;
    
    int americano_price = 5500;
    
    int num_americano = money / americano_price;
    
    int remaining_money = money % americano_price;
    
    answer.push_back(num_americano);
    answer.push_back(remaining_money);
    
    return answer;
}