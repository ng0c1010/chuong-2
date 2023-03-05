#include <iostream>
using namespace std;

int giaiThua(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * giaiThua(n-1);
  }
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  cout << n << "! = " << giaiThua(n) << endl;
  return 0;
}
