#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


string convert_to_n_base(int num, int n) 
{
    const string digits = "0123456789ABCDEF"; 
    
    if (num == 0) 
    {
        return "0";
    }

    string result = "";

    while (num > 0) 
    {
        int remainder = num % n;
        result = digits[remainder] + result;
        num /= n;
    }

    return result;
}


string solution(int n, int t, int m, int p) 
{
    int required_length = (t - 1) * m + p;

    string full_sequence = ""; 
    int current_number = 0;    

    while (full_sequence.length() < required_length) 
    {
        string n_base_string = convert_to_n_base(current_number, n);
        
        full_sequence += n_base_string;

        current_number++;
    }

    string tube_result = ""; 


    for (int i = 0; i < t; i++) 
    {
        int index = (p - 1) + i * m;
        tube_result += full_sequence[index];
    }

    return tube_result;
}