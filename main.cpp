#include <iostream>
using namespace std;

double my_pow(double x, int y) {
    double q = 1;

    if (y < 0) {
        y = -y;
        for (double i = 0; i < y; i++) {
            q = q * x;
        }

        return 1 / q;
    }
    else {
        for (double i = 0; i < y; i++) {
            q = q * x;
        }
        cout << q << endl;
        return q;
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    double b, q;
    cout << "Введите степень, затем число" << endl;
    cin >> a;
    cin >> b;
    q = my_pow(b, a);
    cout << b << " в степени " << a << " = " << q;
    return 0;
}