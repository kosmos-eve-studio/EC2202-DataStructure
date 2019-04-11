#include <iostream>

namespace BestCom{
  void SimpleFunc(); //함수 선언
  void BestComNSFunc();
}

namespace ProgCom{
  void SimpleFunc();
}

int main(){

  BestCom::SimpleFunc();
  ProgCom::SimpleFunc();

  std::cout << '\n';
  BestCom::BestComNSFunc();
  return 0;
}




void BestCom::SimpleFunc(){
  std::cout << "BestCom이 정의한 함수" << '\n';
}
void BestCom::BestComNSFunc(){
  std::cout << "BestComNSFunc을 실행" << '\n';
  std::cout << "같은 NS(BestCom)내의 SimpleFunc이 실행됩니다 : ";
  SimpleFunc();
  std::cout << "이 함수는 다른 NS내의 ProgCom::SimpleFunc입니다 : ";
  ProgCom::SimpleFunc();
}
void ProgCom::SimpleFunc(){
  std::cout << "ProgCom이 정의한 함수" << '\n';
}
