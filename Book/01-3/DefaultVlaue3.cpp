//함수의 오버로딩형태로 재구현
#include <iostream>
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);
int BoxVolume(void);

int main(){
      std::cout << "[3,3,3] : " << BoxVolume(3,3,3)<<'\n';
      std::cout << "[5,5,D] : " << BoxVolume(5,5)<<'\n';
      std::cout << "[7,D,D] : " << BoxVolume(7)<<'\n';
      std::cout << "[D,D,D] : " << BoxVolume()<<'\n';
      return 0;
}


int BoxVolume(int length, int width, int height){
  return length*width*height;
}

int BoxVolume(int length, int width){
  return length*width*1;
}

int BoxVolume(int length){
  return length*1*1;
}

int BoxVolume(void){
  return 1*1*1;
}
