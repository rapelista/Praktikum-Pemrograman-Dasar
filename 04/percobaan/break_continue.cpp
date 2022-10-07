#include <iostream>
using namespace std;

int main() {
  int nilai;

  cout << "Pernyataan break batas 10" << endl;
  for (nilai = 1; nilai <= 10; nilai++) {
    if (nilai == 5)
      break;
    else
      cout << nilai << endl;
  }

  cout << "Pernyataan continue batas 10" << endl;
  for (nilai = 1; nilai <= 10; nilai++) {
    if (nilai == 5)
      continue;
    else
      cout << nilai << endl;
  }
}