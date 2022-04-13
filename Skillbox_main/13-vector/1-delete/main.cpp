#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Size of vector?\n";
    cin >> N;

    vector<int> vec(N), newVec(0);
    cout << "Enter " << N << " elements:\n";
    for (int i=0; i<N; i++)
        cin >> vec[i];

    int number;
    cout << "Enter number for delete:\n";
    cin >> number;

    for (int i=0; i<vec.size(); i++)
        if (vec[i]!=number)
            newVec.push_back(vec[i]);

    for (int i=0; i<newVec.size(); i++)
    cout << newVec[i] << " ";
}