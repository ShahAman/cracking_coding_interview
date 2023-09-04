#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int timeToBuyTickets(vector<int> &tickets, int k)
{
    queue<int> q;
    int time = 0;

    for(int i = 0; i < tickets.size(); ++i)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        int current_person = q.front();
        q.pop();

        if(tickets[current_person] > 0)
        {
            tickets[current_person]--;
            time++;

            if(current_person == k && tickets[current_person] == 0)
            {
                break;
            }
            q.push(current_person);
        }
    }

    return time;
}

int main()
{
    vector<int> tickets1 = {2, 3, 2};
    int k1 = 2;
    cout << timeToBuyTickets(tickets1, k1) << endl; // Output: 6

    vector<int> tickets2 = {5, 1, 1, 1};
    int k2 = 0;
    cout << timeToBuyTickets(tickets2, k2) << endl; // Output: 8

    return 0;
}
