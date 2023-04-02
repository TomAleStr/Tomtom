//Задание 3.
//Прочитайте в вектор набор целых чисел. Вычислите и отобразите сумму каждой пары смежных элементов в векторе.
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   vector<int> sums;
   for (int i = 0; i < vec.size() - 1; i++) {
      int sum = vec[i] + vec[i + 1];
      sums.push_back(sum);
   }

   for (int i = 0; i < sums.size(); i++) {
      cout << sums[i] << " ";
      if ((i + 1) % 8 == 0) {
         cout << endl;
      }
   }
   if (sums.size() % 8 != 0) {
      cout << endl;
   }

   return 0;
}