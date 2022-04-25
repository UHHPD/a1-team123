#include <fstream>
#include <iostream>
#include <cmath>

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

double varianz(){
  std::ifstream fin("datensumme.txt");
  int a;
  double summ = sum();
  double varianz = 0;
  for(int i = 0 ; i < 234 ; ++i){
    fin >> a;
    varianz = varianz + pow(a - summ,2);
  }
  return varianz/234;
}
int main() {
  //1a
  std::cout << sum() << std::endl;
  //1b
  std::cout << varianz() << std::endl;
  //1c
  double stab = sqrt(varianz());
  std::cout << stab << std::endl;
}