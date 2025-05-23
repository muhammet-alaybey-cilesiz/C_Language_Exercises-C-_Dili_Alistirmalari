#include <stdio.h>
#include <string.h>

//'union' Logic and its use in functions
//'union' Mantığı ve fonksiyonlarda kullanımı

typedef union {            // When we use 'typedef', we do not need to specify union every time.
    int number;            // 'typedef' kullandığımızda her defasında union belirtmemize gerek kalmaz.
    float cost;
    char name[20];
} Data;

void printData(Data *d) {                                  // *d indicates variables under Data
    printf("\n--- Union Content ---\n");             // *d Data altındaki değişkenleri işaret eder
    printf("Union size: %zu bytes\n", sizeof(*d));
    printf("Number: %d\n", d->number);               //The function is called with the '&' pointer
    printf("Cost: %.2f\n", d->cost);                 //Fonksiyon & işaretçisi ile çağrılır
    printf("Name: %s\n", d->name);
    printf("----------------------\n");
}

int main() {
    Data data;
    int selection;

    while (1) {
        printf("\n*** Select a data type ***\n");
        printf("1 - Number \n");    //Each time a value is entered, the last entered value is kept in memory.
        printf("2 - Cost \n");      //Her değer girildiğinde son girilen değer hafızada tutulur.
        printf("3 - Name \n");      //And other values are also changed.
        printf("0 - Exit \n");      //Ve diğer değerlerde değişme yaşanır.
        printf("Your selection: ");

        scanf("%d", &selection);     //However, the memory held by the union does not change.
        getchar(); // clear newline        //Ancak unionun tuttuğu bellek değişmz.

        switch (selection) {
        case 1:
            while (1) {
                printf("Number (Please enter a positive integer): ");
                if (scanf("%d", &data.number) != 1 || data.number < 1) {
                    printf("Invalid input! Please enter a value again.\n");
                    while (getchar() != '\n');
                }
                else {
                    while (getchar() != '\n'); //
                    printData(&data);
                    break;
                }
            }
            break;
        case 2:
            while (1) {
                printf("Cost (Please enter a positive number): ");
                if (scanf("%f", &data.cost) != 1 || data.cost < 1) {
                    printf("Invalid input! Please enter a value again.\n");
                    while (getchar() != '\n');
                }
                else {
                    while (getchar() != '\n');
                    printData(&data);
                    break;
                }
            }
            break;
        case 3:
            printf("Name (max 19 chars): ");
            fgets(data.name, sizeof(data.name), stdin);

            size_t len = strlen(data.name);
            if (len > 0 && data.name[len - 1] == '\n'){         //Prevents array overflows
                data.name[len - 1] = '\0';                      //Dizi taşmalarını önler
            }
            else{
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);  //Cleans up excess from stdin(standard input)
            }                                                   //Stdin'den fazlalığı temizler
            printData(&data);
            break;
        case 0:
            printf("Exiting the program...\n");
            return 0;

        default:
            printf("Invalid selection. Please try again.\n");
        }
    }
}
