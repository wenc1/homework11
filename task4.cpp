#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "vuvedete 2 chisla" << endl;
    cin >> x >> y;
    int max = x > y ? x : y;
    {
        max < 0 ? max *= -1 : max == max;
        cout << max;
    }
    return 0;
}
