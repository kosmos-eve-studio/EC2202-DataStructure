#include <math.h>

int isPrimeNum2(int n){
    int i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
