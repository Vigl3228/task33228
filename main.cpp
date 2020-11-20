#include <iostream>
using namespace std;
double my_pow(double x, unsigned int y) {
    double q = 1;
    while (y) {
        if (y % 2 == 0) {
            y =y / 2;
            x =x * x;
        }
        else {
            y--;
            q =q * x;
        }
    }

    return q;
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