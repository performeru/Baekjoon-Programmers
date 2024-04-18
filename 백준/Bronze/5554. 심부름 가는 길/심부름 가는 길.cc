#include <iostream>

using namespace std;

int main() 
{
    int home_to_school, school_to_pc, pc_to_academy, academy_to_home;

    cin >> home_to_school >> school_to_pc >> pc_to_academy >> academy_to_home;
    
    int total_seconds = home_to_school + school_to_pc + pc_to_academy + academy_to_home;
    
    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;
    
    cout << minutes << endl;
    cout << seconds << endl;
    
}