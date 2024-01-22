#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

map<string, double> GradeMap = 
{
    {"A+", 4.5},
    {"A0", 4.0},
    {"B+", 3.5},
    {"B0", 3.0},
    {"C+", 2.5},
    {"C0", 2.0},
    {"D+", 1.5},
    {"D0", 1.0},
    {"F", 0.0}
};

double cal(const string& grade) 
{
    auto it = GradeMap.find(grade);
    if (it != GradeMap.end()) 
    {
        return it->second;
    }
    return 0.0;  
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string Subject_Name;
    double Credit;
    string Grade;
    
    double sum {};
    double count {};
    
    for(int i = 0; i < 20; i++)
    {
       cin >> Subject_Name >> Credit >> Grade;
       
        if(Grade!="P")
       {
           count = count + Credit;
           sum = sum + Credit * cal(Grade);
       }
    }
    
    cout << fixed << setprecision(6);
    cout << sum / count;
    
}