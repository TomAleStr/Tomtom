//Задание 2.
//Прочитайте некоторый текст, сохраняя каждое введенное слово как отдельный элемент вектора. 
//Преобразуйте символы каждого слова в прописные. Отобразите преобразованный текст, выводя по 8 слов в строке

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<string> words = {"one", "two", "three", "four", "five", "six", "seven", "eight"};
   for (int i = 0; i < words.size(); i++) {
      for (int j = 0; j < words[i].length(); j++) {
         words[i][j] = toupper(words[i][j]);
       }
   }

   int count = 0;
   for (int i = 0; i < words.size(); i++) {
      cout << words[i] << " ";
      count++;
      if (count == 8) {
         cout << endl;
         count = 0;
      }
   }
   if (count != 0) {
      cout << endl;
   }

   return 0;
}