#include <iostream>
#include <cmath>

using namespace std;

// H�m t�nh can b?c 3 s? d?ng h�m exp v� ln
double cube_root(double n) {
    if (n == 0) return 0; // N?u n = 0 th� can b?c 3 cung b?ng 0
    double x = exp(log(fabs(n)) / 3); // T�nh gi� tr? ban d?u c?a can b?c 3
    double y = (2 * x + n / (x*x)) / 3; // �p d?ng c�ng th?c l?p d? t�nh can b?c 3
    if (x == y) return n > 0 ? x : -x; // N?u gi� tr? x v� y g?n nhau th� tr? v? gi� tr? can b?c 3
    else return cube_root(y); // Ngu?c l?i, ti?p t?c l?p l?i d?n khi x v� y g?n nhau
}

int main() {
    double n;
    cout << "Nhap vao so can tinh can bac 3: ";
    cin >> n;
    cout << "Can bac 3 cua " << n << " la: " << cube_root(n);
    return 0;
}
