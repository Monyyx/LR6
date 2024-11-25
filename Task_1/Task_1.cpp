#include <iostream>
#include <limits>
#include "functions.h"

/*
При выполнении задания предусмотреть возможность )ввода текста с
клавиатуры. При работе с текстом использовать строки длиной не более 80-
ти символов. Исходный текст и полученный результат вывести на
экран. Считывание элементов производится через метод getchar().iuhh fuck it 

12. Дана строка, состоящая из слов, разделенных пробелами. Разбить
исходную строку на две подстроки, причем первая длиной k символов, если
на k-ю позицию попадает слово, то его следует отнести ко второй строке.
Значение k вводится с клавиатуры.
*/

int main(){
  char line[81];
  int size  = 0;
  char now;
  int division = 0;
    std::cout << "Enter a string (up to 80 characters): ";
  while(size < 80 && (line[size] = getchar()) != '\n') ++size;
    line[size] = '\0';

  std::cout << "Enter the point of sentence division: " << '\n';
     bool validInput = false;
     	while (!validInput) {
          	if (std::cin >> division || division < 0 || division > size + 1) {
            validInput = true;
                } else {
                    std::cout << "Invalid input. Please enter a integer under " << size << " and more then 0: " << '\n';
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очищаем буфер ввода
                }
            }

	return 0;
}