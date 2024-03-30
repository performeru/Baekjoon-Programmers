#include <iostream>

using namespace std;

int main() 
{
    int min_guk_scores[4];
    int man_se_scores[4];
    
    for (int i = 0; i < 4; ++i) 
    {
        cin >> min_guk_scores[i];
    }
    
    for (int i = 0; i < 4; ++i) 
    {
        cin >> man_se_scores[i];
    }
    
    int min_guk_total = 0;
    int man_se_total = 0;
    
    for (int i = 0; i < 4; ++i) 
    {
        min_guk_total += min_guk_scores[i];
        man_se_total += man_se_scores[i];
    }
    
    if (min_guk_total >= man_se_total) 
    {
        cout << min_guk_total << endl;
    } 
    else
    {
        cout << man_se_total << endl;
    }
}