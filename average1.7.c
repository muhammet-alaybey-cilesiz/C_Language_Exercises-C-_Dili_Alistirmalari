#include<stdio.h>
#include<stdlib.h>

// Exam average and pass/fail check
// Sınav ortalaması hesaplayıp geçti/kaldı bilgisini verir

int main(){
    float exam1 , exam2 ,average;

    printf("exam1: ");
    scanf("%f",&exam1);
    printf("exam2: ");
    scanf("%f",&exam2);

    average = (exam1+exam2)/2;
    printf("average: %.2f \n",average);

    if (average >= 50){
        printf("you passed");
    }
    else {
        printf("you failed");
    }
    return 0;
}