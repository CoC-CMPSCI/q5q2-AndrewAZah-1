#include <iostream>
using namespace std;

int main()
{
    int N, M, result = 1;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    cout << N << " to power number: ";

    // TODO

    for (int i = 0; i < M; i++)
    {
        cout << result << ", ";
        result *= N;
    }

    cout << result;
    cout << endl;

    return 0;
}
