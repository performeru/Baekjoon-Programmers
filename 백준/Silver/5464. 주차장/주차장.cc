#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<int> parking_fees(N + 1); 
    for (int i = 1; i <= N; ++i) 
    {
        cin >> parking_fees[i];
    }

    vector<int> car_weights(M + 1); 
    for (int i = 1; i <= M; ++i) 
    {
        cin >> car_weights[i];
    }

    vector<int> parking_lot(N + 1, 0);  
    queue<int> waiting_queue;  

    int total_income = 0;

    for (int i = 0; i < 2 * M; ++i) 
    {
        int event;
        cin >> event;

        if (event > 0) 
        {  
            int car = event;
            bool parked = false;

            for (int j = 1; j <= N; ++j) 
            {
                if (parking_lot[j] == 0) 
                {
                    parking_lot[j] = car;
                    total_income += parking_fees[j] * car_weights[car];
                    parked = true;
                    break;
                }
            }
            if (!parked) 
            {
                waiting_queue.push(car);
            }
        } 
        else
        {
            int car = -event;
            
            for (int j = 1; j <= N; ++j) 
            {
                if (parking_lot[j] == car) 
                {
                    parking_lot[j] = 0; 

                    if (!waiting_queue.empty()) 
                    {
                        int next_car = waiting_queue.front();
                        waiting_queue.pop();
                        parking_lot[j] = next_car;
                        total_income += parking_fees[j] * car_weights[next_car];
                    }
                    break;
                }
            }
        }
    }

    cout << total_income << "\n";

}