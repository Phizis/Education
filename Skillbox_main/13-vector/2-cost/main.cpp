#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> cost{2.5, 4.25, 3.0, 10.0};
    vector<int> list {1, 1, 0, 3};
    float sum;

    for (int i=0; i<list.size(); i++)
        sum+=cost[list[i]];
    cout << sum;
}