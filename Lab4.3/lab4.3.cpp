#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, X_s, X_e, dX;

    cout << " a, b, c: ";
    cin >> a >> b >> c;
    cout << " X_s: ";
    cin >> X_s;
    cout << " X_e: ";
    cin >> X_e;
    cout << " dX: ";
    cin >> dX;

    cout << setw(10) << "X" << setw(15) << "F(X)" << endl;
    cout << "----------------------------" << endl;

    for (double x = X_s; x <= X_e; x += dX) {
        double F;

        if (a < 0 && c != 0) {
            F = a * x * x + b * x + c;
        }
        else if (a > 0 && c == 0) {
            if (x != b) {               // щоб не поділити на 0
                F = -a / (x - b);
            }
            else {
                cout << setw(10) << x << setw(15) << "невизначено" << endl;
                continue;
            }
        }
        else {
            F = a * (x + c);
        }

        cout << setw(10) << x << setw(15) << F << endl;
    }

    return 0;
}