#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    // Program her calistirildiginda farkli sonuclar almak icin fonksiyonu kullanıyoruz.
    srand(time(NULL));
    
    // Kullanicidan rastgele sayi uretme adedini aliyoruz.
    printf("Kac adet rastgele sayi uretmek istersiniz: ");
    scanf("%d", &n);

    // Kullanicidan alinan sayiya kadar rastgele sayilar uretiyoruz.
    for (i = 0; i < n; i++) {
        int random_number = rand() % 300; // 0 ile 300 arası değerler alıyoruz.
        printf("Rastgele sayi %d: %d\n", i + 1, random_number);
    }
    
    return 0;
}