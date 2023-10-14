#include <iostream>

using namespace std;

int main()
{
  int N{}, V{}, count{};

  cin >> N;
  int arr[N];

  for (int i = 0; i < N; i++) 
  {
    cin >> arr[i];
  }

  cin >> V;

  for (int i = 0; i < N; i++) 
  {
    if (arr[i] == V)
    {
         count += 1;
    }
  }

  cout << count << endl;

}
