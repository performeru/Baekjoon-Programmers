#include <iostream>


int main()
{
    int n, m;
    std::cin >> n >> m;
    int l[n+1];
    
    for(int i = 0; i <= n; i++) 
    {
        l[i] = i;
    }
    for(int x = 0; x < m; x++) 
    {
        int i, j;
        std::cin >> i >> j;
        int s[n+1];
        for(int k = 0; k <= n; k++) 
        {
            s[k] = l[k];
        }
        for(int y = 0; y <= j-i; y++) 
        {
            l[i+y] = s[j-y];
        }
    }
    for(int i = 1; i <= n; i++) 
    {
        std::cout << l[i] << " ";
    }
    return 0;
}