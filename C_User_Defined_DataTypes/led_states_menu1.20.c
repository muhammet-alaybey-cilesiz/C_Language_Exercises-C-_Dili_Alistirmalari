#include<stdio.h>

//Led States Menu and "enum" Stracture
//Led Durunmları  Menüsü ve "enum" Yapısı

enum Led_State {        //Proceeds by adding +1.It starts from zero unless otherwise stated.
    LED_OFF,   //0      //+1 eklenerek devam eder. Aksi belirtilmediği takdirde sıfırdan başlar.
    LED_ON,    //1
    LED_BLINK  //2
};

void display_Led_State(enum Led_State state) {
    switch(state) {
        case LED_OFF:
            printf("LED is OFF\n");
            break;
        case LED_ON:
            printf("LED is ON\n");
            break;
        case LED_BLINK:
            printf("LED is BLINKING\n");
            break;
    }
}

int main() {
    int selection;

    printf("\t\t ***SELECT LED STATE*** \t\t\n");
    printf("*Enter 0 for LED OFF\n");
    printf("*Enter 1 for LED ON\n");
    printf("*Enter 2 for LED BLINKING\n");

    while (1) {
        printf("Selection: ");
        if (scanf("%d", &selection) != 1 || selection < 0 || selection > 2) {
            printf("Invalid value. Please enter a number between 0 and 2.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }

    display_Led_State((enum Led_State)selection);

    return 0;
}
