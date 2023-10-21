#include <iostream>

int main() 
{
    int n, x, max = 0;
    double ans = 0;

    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        ans += x;
        if (max < x)
        {
            max = x;
        }
    }

    ans = ans / max * 100 / n;

    std::cout << ans << std::endl;

    return 0;
}