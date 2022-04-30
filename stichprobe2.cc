#include <fstream>
using namespace std;
#include <iostream>
#include <cmath>

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
    ofstream fou("mittelwerte.txt", ios::app);
    fou << sum << endl;
    fou.close();
    ofstream fout("varianzen.txt", ios::app);
    fout << (varianz/9) << endl;
    fout.close();
    varianz = 0;
    sum = 0;
    }
  }
