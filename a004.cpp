#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    do
    {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "閏年" << "\n";
    }
    else 
    {
        cout << "平年" << "\n";
    }
    year = 0;
    cin >> year;
    }
    while(year != 0);
    return 0;
}