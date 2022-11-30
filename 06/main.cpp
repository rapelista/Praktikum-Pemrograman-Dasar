// // #include <iostream>
// // using namespace std;

// // void cek_nilai(int angka) {
// //   // cek apakah nilai yang dikirim bernilai > 5 atau tidak
// //   if(angka > 5) {
// //     cout << "nilai tersebut lebih dari lima" << endl;
// //     return;
// //   }

// //   cout << "lebih kecil atau sama dengan lima" << endl;
// // }

// // int sum_int(int a, int b) {
// //   return a + b;
// // }

// // float sum_float(float a, float b) {
// //   return a + b;
// // }

// // int faktorial(int n) {
// //   return (n == 1) ? 1 : n * faktorial(n - 1);
// // }

// // int main() {
// //   // cout << faktorial(3) << endl;
// //   // 3 * 2 * 1 = 6

// //   // int nilai = 10;
// //   // int c = 10, d = 25;
// //   // cek_nilai(nilai);
// //   // cout << sum(c, d) << endl;
// //   // int hasil = sum(c, d);
// //   // cout << sum(11, 20) << endl;
// //   // cout << sum(20, 20) << endl;
// //   // cout << sum_float(11.5, 20.4) << endl;
// // }

// #include <iostream>
// using namespace std;

// void print(int a, int b) {
//   cout << "a: " << a << " | b: " << b << endl;
// }

// // pass by pointer
// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// // pass by reference
// void swap(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// // void printArray(int array[], int size) {
// //   for (int i = 0; i < size; i++) {
// //     cout << array[i] << " ";
// //   }
// //   cout << endl;
// // }

// int main() {
//   // int a = 10, b = 25;
//   // print(a, b);
//   // swap(a, b);
//   // print(a, b);

//   // int nilai[] = {1, 2, 3};
//   // int size = sizeof(nilai) / sizeof(int);
//   // printArray(nilai, size);
// }

#include <iostream>
using namespace std;

void print(int m[][3], string nama_matriks) {
  cout << nama_matriks << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

void addition(int dest[][3], int a[][3], int b[][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      dest[i][j] = a[i][j] + b[i][j];
    }
  }
}

int main() {
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int dest[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  print(a, "Matriks A");
  print(b, "Matriks B");
  print(dest, "Matriks Dest");
  addition(dest, a, b);
  print(dest, "Matriks Dest");
}