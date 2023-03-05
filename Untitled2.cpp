#include <iostream>
using namespace std;

int tongChan(int a[], int n) {
  if (n == 0) {
    return 0;
  } else {
    int tong = tongChan(a, n-1);
    if (a[n-1] % 2 == 0) {
      tong += a[n-1];
    }
    return tong;
  }
}

int main() {
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;

  int a[n];
  cout << "Nhap cac phan tu cua mang:\n";
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }

  int tong = tongChan(a, n);
  cout << "Tong cac so chan trong mang la: " << tong << endl;

  return 0;
}
