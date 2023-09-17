#include <iostream>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;

    int total_minutes = (A * 60 + B + C) % (24 * 60); // 분 단위로 계산

    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    std::cout << hours << " " << minutes << std::endl;

    return 0;
    
}