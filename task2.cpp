#include <iostream>

using namespace std;

int main()
{
   int x, y, z, D;
	cout << "vuvedete chislata" << endl;
	cin >> x >> y >> z;
	D = (z*y*x);
	if (D > 0)
	{
		cout << '+' << endl;
	}
	else if (D < 0)
	{
		cout << '-' << endl;
	}
	else
	{
		cout << '0' << endl;
	}
    return 0;
}
