#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int dice[3];
    cin >> dice[0] >> dice[1] >> dice[2];

    sort(dice, dice + 3);  

    int prize = 0;  

    if (dice[0] == dice[1] && dice[1] == dice[2])
    {
        prize = 10000 + dice[0] * 1000;
    } 
    else if (dice[0] == dice[1] || dice[1] == dice[2]) 
    {
        prize = 1000 + dice[1] * 100;
    } 
    else
    {
        prize = dice[2] * 100;
    }

    cout << prize << endl;
}