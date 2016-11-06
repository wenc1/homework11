#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d,e;
   cout <<"vuvedete 5 chisla" << endl;
   cin >> a >> b >> c >> d >> e;
   if ((a >= b) && (a >= c) && (a >= d) && (a >= e))
   {
       cout << a << " e nai - golqmoto chislo" << endl;
   }
   else if ((b >= a) && (b >= c) && (b >= d) && (b >= e))
   {
       cout << b << " e nai - golqmoto chislo" << endl;
   }
   else if ((c >= a) && (c >= b) && (c >= d) && (c >= e))
   {
       cout << c << " e nai - golqmoto chislo" << endl;
   }
   else if ((d >= a) && (d >= b) && (d >= c) && (d >= e))
   {
       cout << d << " e nai - golqmoto chislo" << endl;
   }
   else if ((e >= a) && (e >= b) && (e >= c) && (e >= d))
   {
       cout << e << " e nai - golqmoto chislo" << endl;
   }
   else
    {
        cout << "greshka" << endl;
   }
    return 0;
}
