#include <iostream>
#include <cmath>

using namespace std;

// Hàm tính can b?c 3 s? d?ng hàm exp và ln
double cube_root(double n) {
    if (n == 0) return 0; // N?u n = 0 thì can b?c 3 cung b?ng 0
    double x = exp(log(fabs(n)) / 3); // Tính giá tr? ban d?u c?a can b?c 3
    double y = (2 * x + n / (x*x)) / 3; // Áp d?ng công th?c l?p d? tính can b?c 3
    if (x == y) return n > 0 ? x : -x; // N?u giá tr? x và y g?n nhau thì tr? v? giá tr? can b?c 3
    else return cube_root(y); // Ngu?c l?i, ti?p t?c l?p l?i d?n khi x và y g?n nhau
}

int main() {
    double n;
    cout << "Nhap vao so can tinh can bac 3: ";
    cin >> n;
    cout << "Can bac 3 cua " << n << " la: " << cube_root(n);
    return 0;
}
