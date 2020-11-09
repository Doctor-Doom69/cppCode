#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    const double USDJPY = 103.35;
    const double USDMXN = 20.58;

    char c = ' ';
    double amt = 0;
    double amtj, amtm, amtu;

    //check investing site for API that outputs price feed. GET http methods, returns a JSON.


    //convert from usd to jpy, usd to mx, and mx to jpy

    cout << "Input amount of currency: ";
    cin >> amt;

    cout << "Enter currency type \n u for USD      m for MXN       j for JPY\n";
    cin >> c;

    switch(c){

        case 'u':
        amtj = amt * USDJPY;
        amtm = amt * USDMXN;
        cout << "JPY\t\tMXN\n" << amtj << "\t\t" << amtm;
        break;

        case 'j':
        amtu = amt / USDJPY;
        amtm = amtu * USDMXN;
        cout << "USD\t\tMXN\n" << amtu << "\t\t" << amtm;
        break;

        case 'm':
        amtu = amt / USDMXN;
        amtj = amtu * USDJPY;
        cout << "USD\t\tJPY\n" << amtu << "\t\t" << amtj;
        break;

        default:
        cout << "Not a valid currency\n";
    }
    return 0;
}
