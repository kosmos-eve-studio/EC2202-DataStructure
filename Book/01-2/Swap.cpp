#include <iostream>

void swap(int a, int b){
  std::cout << b << ' ' << a <<'\n';
}

void swap(double a, double b){
  std::cout << b << ' ' << a <<'\n';
}

void swap(char a, char b){
  std::cout << b << ' ' << a <<'\n';
}

int main(){
  swap(30,20);
  swap('A','Z');
  swap(1.111,2.222);

  return 0;
}
