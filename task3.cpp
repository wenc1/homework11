#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << " vuvedete 2 chisla " << endl;
    cin >> x >> y;
    int sum = (x+y);
    sum % 2 == 0 ? sum *= 2 : sum /= 2;
    cout << "sumata na chislata e " << sum << endl;
    return 0;
}
