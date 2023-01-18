#include <math.h>
#include <iostream>

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
using namespace std;

int main() {

    string p = "s";
    string a;
    char z;
    while (a != p) {

        cout << "press + to add, ";
        cout << "press - to subtract, ";
        cout << "press x to multiply. " << endl;
        cout << "press / to divide, ";
        cout << "press ^ for power, ";
        cout << "press f for factorial. " << endl;
        cout << "press s to stop, ";
        cout << "press q for sqrt." << endl;
        cout << "press a for area of ... , ";
        cout << "press p for perimeter/circumference of ... ." << endl;
        cin >> z;
        if (z == '+') {
            double c;
            double d;
            cout << "please type in the numbers you would like to add" << endl;
            cin >> c;
            cout << c << " + " << "__" << endl;
            cin >> d;
            cout << c << " + " << d << endl;
            double vala = c + d;
            cout << vala << endl;

        } else if (z == '-') {
            double e;
            double f;
            cout << "please type in the numbers you would like to subtract" << endl;
            cin >> e;
            cout << e << " - " << "__" << endl;
            cin >> f;
            cout << e << " - " << f << endl;
            double valb = e - f;
            cout << valb << endl;
        } else if (z == 'x') {
            double g;
            double h;
            cout << "please type in the numbers you would like to multiply" << endl;
            cin >> g;
            cout << g << " x " << "__" << endl;
            cin >> h;
            cout << g << " x " << h << endl;
            double valc = g * h;
            cout << valc << endl;
        } else if (z == '/') {
            double i;
            double j;
            cout << "please type in the numbers you would like to divide" << endl;
            cin >> i;
            cout << i << " / " << "__" << endl;
            cin >> j;
            cout << i << " / " << j << endl;
            double valc = i / j;
            cout << valc << endl;
        } else if (z == '^') {
            double k;
            double l;
            cout << "please type in the numbers" << endl;
            cin >> k;
            cout << k << " ^ " << "__" << endl;
            cin >> l;
            cout << k << " ^ " << l << endl;
            double valc = pow(k, l);
            cout << valc << endl;
        } else if (z == 'f') {
            cout << "enter the number" << endl;
            int num;
            cin >> num;
            cout << "Factorial of " << num << " is " << factorial(num) << endl;
        } else if (z == 's') {
            a = "s";
        } else if (z == 'q') {
            int numy;
            cout << "please enter the number " << endl;
            cin >> numy;
            double ae = sqrt(numy);
            cout << ae << endl;

        } else if (z == 'a') {
            cout << "press s for area of square , " << endl;
            cout << "press c for area of circle , " << endl;
            cout << "press r for are of rectangle." << endl;

            char val;
            cin >> val;
            if (val == 's') {
                cout << "please input length" << endl;
                double numi;
                cin >> numi;
                double ex = pow(numi, 2);
                cout << "the area is =" << ex << endl;
            } else if (val == 'c') {
                double r;
                cout << "please input radius" << endl;
                cin >> r;
                double ar = 3.14 * pow(r, 2);
                cout << "the area is =" << ar << endl;
            } else if (val == 'r') {
                double l;
                double w;
                cout << "please enter length" << endl;
                cin >> l;
                cout << "please enter width" << endl;
                cin >> w;
                double ai = l * w;
                cout << "the area is =" << ai << endl;
            }
        } else if (z == 'p') {
            cout << "press s for perimeter of square , " << endl;
            cout << "press c for circumference of circle , " << endl;
            cout << "press r for perimeter of rectangle." << endl;

            char valai;
            cin >> valai;
            if (valai == 's') {
                cout << "please input length" << endl;
                double numu;
                cin >> numu;
                double el = 4 * numu;
                cout << "the perimeter is =" << el << endl;
            } else if (valai == 'c') {
                double ra;
                cout << "please input radius" << endl;
                cin >> ra;
                double ari = 2 * 3.14 * ra;
                cout << "the circumference is =" << ari << endl;
            } else if (valai == 'r') {
                double li;
                double wi;
                cout << "please enter length" << endl;
                cin >> li;
                cout << "please enter width" << endl;
                cin >> wi;
                double aiw = 2 * (li + wi);
                cout << "the perimeter is =" << aiw << endl;
            }
        }
    }
        return 0;
    }
