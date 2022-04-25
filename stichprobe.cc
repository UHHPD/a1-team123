#include <fstream>
#include <iostream>
#include <math.h>

double sum(){
  std::ifstream fin("datensumme.txt");
  int a;
  double sum = 0;
  for(int i = 0 ; i < 234 ; ++i) {
    fin >> a;
    sum = sum + a;
  }
  sum = sum/234;
  return sum;
}
int main() {
  std::cout << sum() << std::endl;
  //1b
  
  std::ifstream fin("datensumme.txt");
  int a;
  double summ = sum();
  double summe = 0;
  for(int i = 0 ; i < 234 ; ++i) {
    fin >> a;
    summe = pow(a - summ,2);
  }
  std::cout << summe << std::endl;
}