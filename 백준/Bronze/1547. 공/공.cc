#include <iostream>

using namespace std;

int main()
{
	int cups[3] = { 1, 0 , 0 };

	int M;
	cin >> M;

	int X, Y;

    for (int i = 0; i < M; i++) 
    {
        cin >> X >> Y;
        swap(cups[X - 1], cups[Y - 1]); // 컵의 위치 변경
    }

    // 공이 있는 컵을 찾아 출력
    for (int i = 0; i < 3; i++) 
    {
        if (cups[i] == 1) 
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    // 공이 없는 경우
    cout << -1 << endl;

}