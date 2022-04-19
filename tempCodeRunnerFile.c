
#include <stdio.h>
 
int main() {
  int N = 1000;
  bool check[N + 1];
  // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
 
  // Thuật toán sàng nguyên tố
  // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  // In ra các số là số nguyên tố
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      printf("%d ", i);
    }
  }
}
 