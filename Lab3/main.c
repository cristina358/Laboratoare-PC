#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void codul_meu() {
    srand(time(NULL));

    int nr_randuri = 5;
    int nr_coloane = 5;
    int matrice[nr_randuri][nr_coloane];
    float suma_diagonalei = 0;
    int suma_coloanei_impare = 0;


    for (int i = 0; i < nr_randuri; i++) {
        for (int j = 0; j < nr_coloane; j++) {
            matrice[i][j] = rand() % 21 - 10;
        }
    }

    printf("matricea este:");
    for (int i = 0; i < nr_randuri; i++) {
        printf("\n");
        for (int j = 0; j < nr_coloane; j++) {
            printf(" %d \t", matrice[i][j]);
        }
    }

    for (int i = 0; i < nr_randuri; i++) {
        for (int j = 0; j < nr_coloane; j++) {
            if (j % 2 != 0) {
                if (matrice[i][j] < 0) {
                    suma_coloanei_impare = suma_coloanei_impare + matrice[i][j];
                }
            }
        }
    }
    float media_aritmetica;
    float contor = 0;
    for (int i = 0; i < nr_randuri; i++) {
        for (int j = 0; j < nr_coloane; j++) {
            if (i == j) {
                contor++;
                suma_diagonalei = suma_diagonalei + matrice[i][j];
            }
        }
    }
    media_aritmetica = suma_diagonalei / contor;

    float produs = 1;
    for (int i = 0; i < nr_randuri; i++) {
        for (int j = 0; j < nr_coloane; j++) {
            if (matrice[i][j] > 0 && matrice[i][j] < media_aritmetica) {
                produs = matrice[i][j] * produs;
            }
        }
    }

    printf("\n");
    printf("Suma elementelor negative de pe coloanele impare este %d\n", suma_coloanei_impare);
    printf(
        "Produsul elementelor pozotive mai mici ca media aritmetica a elementelor situate pe diagonala principala este:%.2f\n",
        produs);
}

void codul_AI() {
#include <stdio.h>

    int n;
    printf("Introduceti dimensiunea matricei n: ");
    scanf("%d", &n);

    int a[50][50];
    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // 1. Calculam media aritmetica a diagonalei principale
    double suma_diag = 0;
    for (int i = 0; i < n; i++)
        suma_diag += a[i][i];
    double media_diag = suma_diag / n;

    // 2. Suma elementelor negative din coloanele impare
    int suma_neg = 0;
    for (int j = 0; j < n; j += 2) {
        // coloanele impare: 0, 2, 4,...
        for (int i = 0; i < n; i++) {
            if (a[i][j] < 0)
                suma_neg += a[i][j];
        }
    }

    // 3. Produsul elementelor pozitive mai mici decat media diag.
    double produs_poz = 1;
    int exista_poz = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > 0 && a[i][j] < media_diag) {
                produs_poz *= a[i][j];
                exista_poz = 1;
            }

    // 4. Afișăm rezultatele
    printf("Media diagonalei principale = %.2f\n", media_diag);
    printf("Suma elementelor negative din coloanele impare = %d\n", suma_neg);
    if (exista_poz)
        printf("Produsul elementelor pozitive mai mici ca media diagonalei = %.2f\n", produs_poz);
    else
        printf("Nu exista elemente pozitive mai mici ca media diagonalei.\n");
}

int main() {
    codul_meu();
    return 0;
}
