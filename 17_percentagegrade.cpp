#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e = 0;

    cout << " Enter your physics marks : ";
    cin >> a;
    cout << " Enter your chemistry marks : ";
    cin >> b;
    cout << " Enter your biology marks : ";
    cin >> c;
    cout << " Enter your mathematics marks : ";
    cin >> d;
    cout << " Enter your computer marks : ";
    cin >> e;

    int perc = (a + b + c + d + e) / 5;
    cout << "You scored " << perc << "%" << endl;

    if (perc >= 90 && perc < 100)
    {
        cout << "Grade A\n\n";
    }
    else if (perc >= 80 && perc < 90)
    {
        cout << "Grade B\n\n";
    }
    else if (perc >= 70 && perc < 80)
    {
        cout << "Grade C\n\n";
    }
    else if (perc >= 60 && perc < 70)
    {
        cout << "Grade D\n\n";
    }
    else if (perc >= 40 && perc < 60)
    {
        cout << "Grade E\n\n";
    }
    else if (perc >= 0 and perc < 40)
    {
        cout << "Grade F\n\n";
    }
    else
    {
        cout << "False input";
    }
    return 0;
}