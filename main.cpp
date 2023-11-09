#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool calculateLeapYear = true;

    while (calculateLeapYear) {
        int leapYear, inputLeap, result;
    cout << "\"Leap Year calculator\"\n\n";
    cout << "Enter a Number: ";
    cin >> inputLeap;

    leapYear = (inputLeap % 4 == 0 && (inputLeap % 100 != 0 || inputLeap % 400 == 0));

    result = leapYear;

    if (result == 1) {
        cout << "Year " << inputLeap << " is Leap Year";
    } else {
         cout << "Year " << inputLeap << " is not Leap Year";
    }

    cout << "\n\nfind more leap year?(\"1\" yes and \"0\" no: ";
    cin  >> calculateLeapYear;

    }

    return 0;
}
