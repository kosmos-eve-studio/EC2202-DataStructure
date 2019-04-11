#include <iostream>

int main(){
  int var1,var2;
  int result=0;

  std::cout << "범위 양 끝의 정수를 차례로 입력하세요: ";
  std::cin >> var1 >> var2;

  if (var1<var2) {
    for(int i=var1+1; i<var2 ; i++)
      result += i;
  }
  else {
    for(int i=var2+1; i<var1 ; i++)
      result += i;
  }

  std::cout << "사이값 총합: " << result << std::endl;

}
