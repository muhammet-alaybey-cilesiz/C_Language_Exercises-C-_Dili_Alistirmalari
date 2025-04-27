#include <stdio.h>

// Working Logic of Pow Function
// Pow Fonksiyonunun Çalışma Mantığı 
 
int mypow(int base,int power){
    int result = 1;
    for(int i=1; i<=power; i++){
        result = base * result;
    }
    return result;
}

int main(){
    int base,power,result;
    printf("base: ");
    scanf("%d",&base);
    printf("power: ");
    scanf("%d",&power);
    
    result = mypow(base,power);
    printf("%d^%d = %d",base,power,result);

    return 0;
}