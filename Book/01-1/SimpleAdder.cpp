#include <iostream>

int main(){
  // int num=20;
  // std::cout << "Hello, World" << std::endl;
  // std::cout << "Hello" << "World"<< std::endl;

  double val1;
  std::cout << "첫 번쨰 숫자 입력: ";
  std::cin >> val1;

  double val2;
  std::cout << "두 번째 숫자 입력: ";
  std::cin >> val2;

  char str[20];
  std::cout << "세 번째 문자 입력: ";
  std::cin >> str;

  double result = val1+val2;
  std::cout << "덧셈결과: " << result << " / " << str << std::endl;
  return 0;


}
