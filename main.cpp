#include <iostream>
using namespace std;
double my_pow(double x, unsigned int y){
    double q = 1;
    for (int i = 0; i < y; i++) {
        q = q * x;
    }
    return q;
}
int main()
{
    setlocale(LC_ALL, "rus");
    unsigned int a;
    double b, q;
    cout << "Введите степень, затем число" << endl;
    cin >> a;
    if (a < 0) {
        cout << "Введите корректную степень" << endl;
    }
    cin >> b;
    q = my_pow(b, a);
    cout << b << " в степени " << a << " = " << q;
    return 0;
}
