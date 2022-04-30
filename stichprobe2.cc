#include <fstream>
using namespace std;
#include <iostream>
#include <cmath>

double sum2(string name){
  ifstream fin(name);
  double a;
  double sum = 0;
  for(int i = 0 ; i < 26 ; ++i) {
    fin >> a;
    sum = sum + a;
  }
  sum = sum/26.0;
  return sum;
}
int main() {
  //2a
  ifstream fin("datensumme.txt");
  ifstream fin2("datensumme.txt");
  int a;
  int b;
  double sum = 0;
  int count = 0;
  double varianz = 0;
  while(count < 26)
  {
    for(int i = 0 ; i < 9 ; ++i) {
      fin >> a;
      sum = sum + a;
      }
    sum = sum/9;
    for(int i = 0 ; i < 9 ; ++i) {
      fin2 >> b;
      varianz = varianz + pow(b - sum,2);
      }
    count += 1;
    varianz = varianz/9;
    ofstream fou("mittelwerte.txt", ios::app);
    fou << sum << endl;
    fou.close();
    ofstream fout("varianzen.txt", ios::app);
    fout << varianz << endl;
    fout.close();
    varianz = 0;
    sum = 0;
    }
  cout << sum2("mittelwerte.txt") << endl; 
  cout << sum2("varianzen.txt") << endl;
  }


