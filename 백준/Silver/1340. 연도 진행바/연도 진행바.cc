#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <cmath>

using namespace std;

int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

map<string, int> monthToNum = 
{
    {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
    {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
    {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
};

bool isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getElapsedMinutes(int month, int day, int year, int hour, int minute) 
{
    int totalMinutes = 0;
    
    if (isLeapYear(year)) daysInMonth[2] = 29;
    else daysInMonth[2] = 28;
    
    for (int i = 1; i < month; i++) 
    {
        totalMinutes += daysInMonth[i] * 24 * 60;
    }
    
    totalMinutes += (day - 1) * 24 * 60;
    totalMinutes += hour * 60 + minute;
    
    return totalMinutes;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string monthStr;
    int day, year, hour, minute;
    char comma, colon;
    
    cin >> monthStr >> day >> comma >> year >> hour >> colon >> minute;
    
    int month = monthToNum[monthStr];
    
    int totalMinutesInYear = (isLeapYear(year) ? 366 : 365) * 24 * 60;
    
    int elapsedMinutes = getElapsedMinutes(month, day, year, hour, minute);
    
    double percentage = (elapsedMinutes * 100.0) / totalMinutesInYear;
    cout << fixed << setprecision(9) << percentage << '\n';
    
}