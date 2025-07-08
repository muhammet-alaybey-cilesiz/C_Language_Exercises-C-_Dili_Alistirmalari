#include <stdio.h>

//A program that takes students' scores and prints lists containing their scores and averages.
//Öğrencilerin notlarını alıp, not ve ortalamalarını içeren listeleri yazdıran program.

int main() {
    int n;     // n = number of students (öğrenci sayısı)
    printf("Enter number of students: ");   //Öğrenci sayısını giriniz:
    scanf("%d", &n);

    int scores[n][2];     // We created an array to store each student's scores. (Her öğrencinin puanlarını depolamak için dizi oluşturduk.)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter %d. student's %d. exam score: ", i + 1, j + 1);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }

    printf("******  EXAM SCORES LIST  ******\n");   // SINAV PUANLARI LİSTESİ

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d. student %d. exam score: %d \n", i + 1, j + 1, scores[i][j]);
        }
        printf("\n");
    }

    printf("******  AVERAGE EXAM SCORES  ******\n");  // ORTALAMA SINAV PUANLARI

    for (int i = 0; i < n; i++) {
            int average = (scores[i][0] + scores[i][1]) / 2;
            printf("%d. student's average exam score: %d \n", i + 1, average);
    }

    return 0;
}
