#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int Number(int* c, const int size) {
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (!(c[i] % 2 == 0 || i % 13 == 0))
      k++;
  }
  return k;
}
void Create(int* c, const int size, const int Low, const int High)
{
  for (int i = 0; i < size; i++)
    c[i] = Low + rand() % (High - Low + 1);
}
void Print(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
  cout << endl;
}
 
int Sum(int* c, const int size) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    if (!(c[i] % 2 == 0 || i % 13 == 0))
      s += c[i];
  }
    return s;

}

void Change(int* c,const int size) {
  for (int i = 0; i < size; i++) {
    if (c[i] % 2 == 0 || i % 13 == 0)
      c[i] = 0;
  }
}

int main()
{
  srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
  const int n = 21;
  int c[n];
  int Low = 15;
  int High = 85;
  Create(c, n, Low, High);
  Print(c, n);
  int number = Number(c, n);
  cout << "Numbers: ";
  cout << number << endl;
  int sum = Sum(c, n);
  cout << "Sum: ";
  cout << sum << endl;
  Change(c, n);
  Print(c, n);

  return 0;

}