#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int v,s,t;
  std::cout << "program menghitung jarak tempuh" << '\n';
  std::cout << "masukan kecepatan :";
  std::cin >> v;
  std::cout << "masukan waktu tempuh :";
  std::cin >> t;

  s=v*t;

  std::cout << "jarak yang ditempuh adalah :"<<s <<"km"<< '\n';
  return 0;
}
