#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string id;
    cin >> id;

    string fan = ":fan:";
    string middle = ":fan::" + id + "::fan:";

    cout << fan << fan << fan << endl;
    cout << middle << endl;
    cout << fan << fan << fan << endl;

}