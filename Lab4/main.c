#include <stdio.h>

#define MAX 100

void citeste_tablou(int arr[], int index, int n) {
    if (index >= n) return;
    printf("Element %d: ", index + 1);
    scanf("%d", &arr[index]);
    citeste_tablou(arr, index + 1, n);
}
void afiseaza_tablou(int arr[], int index, int n) {
    if (index >= n) return;
    printf("%d ", arr[index]);
    afiseaza_tablou(arr, index + 1, n);
}
void afiseaza_negative(int arr[], int index, int n) {
    if (index >= n) return;
    if (arr[index] < 0) {
        printf("%d ", arr[index]);
    }
    afiseaza_negative(arr, index + 1, n);
}
void suma_recursiva(int arr[], int index, int n, int *suma) {
    if (index >= n) return;
    *suma = *suma + arr[index];
    suma_recursiva(arr, index + 1, n, suma);
}
void maxim_recursiv(int arr[], int index, int n, int *max) {
    if (index >= n) return;
    if (arr[index] > *max) {
        *max = arr[index];
    }
    maxim_recursiv(arr, index + 1, n, max);
}
void minim_recursiv(int arr[], int index, int n, int *min) {
    if (index >= n) return;
    if (arr[index] < *min) {
        *min = arr[index];
    }
    minim_recursiv(arr, index + 1, n, min);
}
void al_doilea_maxim(int arr[], int n) {
    if (n < 2) {
        printf("Nu exista al doilea maxim!\n");
        return;
    }
    int max1 = arr[0], max2 = -999999;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if (max2 != -999999) {
        printf("Al doilea maxim: %d\n", max2);
    } else {
        printf("Nu exista al doilea maxim!\n");
    }
}
void numara_par_impar(int arr[], int n) {
    int pare = 0, impare = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            pare++;
        } else {
            impare++;
        }
    }
    printf("Pare: %d, Impare: %d\n", pare, impare);
}
void numara_negative(int arr[], int index, int n, int *count) {
    if (index >= n) return;
    if (arr[index] < 0) {
        (*count)++;
    }
    numara_negative(arr, index + 1, n, count);
}

void copiaza_tablou(int sursa[], int dest[], int index, int n) {
    if (index >= n) return;
    dest[index] = sursa[index];
    copiaza_tablou(sursa, dest, index + 1, n);
}

void insereaza_element(int arr[], int *n, int poz, int elem) {
    if (poz < 0 || poz > *n) {
        printf("Pozitie invalida!\n");
        return;
    }
    for (int i = *n; i > poz; i--) {
        arr[i] = arr[i - 1];
    }
    arr[poz] = elem;
    (*n)++;
    printf("Element inserat!\n");
}

void sterge_element(int arr[], int *n, int poz) {
    if (poz < 0 || poz >= *n) {
        printf("Pozitie invalida!\n");
        return;
    }
    for (int i = poz; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element sters!\n");
}

void frecventa_elemente(int arr[], int n) {
    int vizitat[MAX] = {0};
    for (int i = 0; i < n; i++) {
        if (vizitat[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    vizitat[j] = 1;
                }
            }
            float procent = (float)count * 100 / n;
            printf("Element %d apare %d ori (%.2f%%)\n", arr[i], count, procent);
        }
    }
}

void afiseaza_unice(int arr[], int n) {
    printf("Elemente unice: ");
    for (int i = 0; i < n; i++) {
        int este_unic = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                este_unic = 0;
                break;
            }
        }
        if (este_unic) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void numara_duplicate(int arr[], int n) {
    int vizitat[MAX] = {0};
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vizitat[i] == 0) {
            int apare = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    apare++;
                    vizitat[j] = 1;
                }
            }
            if (apare > 1) {
                count += apare - 1;
            }
        }
    }
    printf("Numar duplicate: %d\n", count);
}

void sterge_duplicate(int arr[], int *n) {
    int nou_n = 0;
    for (int i = 0; i < *n; i++) {
        int este_duplicat = 0;
        for (int j = 0; j < nou_n; j++) {
            if (arr[i] == arr[j]) {
                este_duplicat = 1;
                break;
            }
        }
        if (!este_duplicat) {
            arr[nou_n++] = arr[i];
        }
    }
    *n = nou_n;
    printf("Duplicate sterse!\n");
}

void imbinare_tablouri(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    printf("Tablouri imbinat!\n");
}

void inverseaza_tablou(int arr[], int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    inverseaza_tablou(arr, start + 1, end - 1);
}

void separa_par_impar(int arr[], int n, int pare[], int *n_pare, int impare[], int *n_impare) {
    *n_pare = 0;
    *n_impare = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            pare[(*n_pare)++] = arr[i];
        } else {
            impare[(*n_impare)++] = arr[i];
        }
    }
    printf("Separare par/impar facuta!\n");
}

void cauta_element(int arr[], int index, int n, int elem, int *gasit) {
    if (index >= n) return;
    if (arr[index] == elem) {
        printf("Gasit la pozitia %d\n", index);
        (*gasit)++;
    }
    cauta_element(arr, index + 1, n, elem, gasit);
}

void sorteaza(int arr[], int n, int crescator) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (crescator) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("Tablou sortat!\n");
}

void sorteaza_par_impar_separat(int arr[], int n) {
    int pare[MAX], impare[MAX];
    int n_pare, n_impare;
    separa_par_impar(arr, n, pare, &n_pare, impare, &n_impare);
    sorteaza(pare, n_pare, 1);
    sorteaza(impare, n_impare, 1);
    printf("Pare sortate: ");
    afiseaza_tablou(pare, 0, n_pare);
    printf("\nImpare sortate: ");
    afiseaza_tablou(impare, 0, n_impare);
    printf("\n");
}

void roteste_stanga(int arr[], int n, int pozitii) {
    pozitii = pozitii % n;
    for (int k = 0; k < pozitii; k++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Rotit stanga cu %d pozitii!\n", pozitii);
}

void roteste_dreapta(int arr[], int n, int pozitii) {
    pozitii = pozitii % n;
    for (int k = 0; k < pozitii; k++) {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    printf("Rotit dreapta cu %d pozitii!\n", pozitii);
}

//bidimensionale
void citeste_matrice(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void afiseaza_matrice(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void aduna_matrice(int mat1[][MAX], int mat2[][MAX], int rez[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rez[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Matrice adunate!\n");
}

void scade_matrice(int mat1[][MAX], int mat2[][MAX], int rez[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rez[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("Matrice scazute!\n");
}

void multiplica_scalar(int mat[][MAX], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = mat[i][j] * scalar;
        }
    }
    printf("Matrice inmultita cu scalar!\n");
}

void multiplica_matrice(int mat1[][MAX], int mat2[][MAX], int rez[][MAX], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Nu se pot inmulti matricele!\n");
        return;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            rez[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                rez[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Matrice inmultite!\n");
}

void verifica_egale(int mat1[][MAX], int mat2[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                printf("Matricele nu sunt egale!\n");
                return;
            }
        }
    }
    printf("Matricele sunt egale!\n");
}

void suma_diagonala_principala(int mat[][MAX], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += mat[i][i];
    }
    printf("Suma diagonalei principale: %d\n", suma);
}

void suma_diagonala_secundara(int mat[][MAX], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += mat[i][n - 1 - i];
    }
    printf("Suma diagonalei secundare: %d\n", suma);
}

void suma_rand_coloana(int mat[][MAX], int rows, int cols) {
    printf("Sume randuri:\n");
    for (int i = 0; i < rows; i++) {
        int suma = 0;
        for (int j = 0; j < cols; j++) {
            suma += mat[i][j];
        }
        printf("Rand %d: %d\n", i, suma);
    }
    printf("Sume coloane:\n");
    for (int j = 0; j < cols; j++) {
        int suma = 0;
        for (int i = 0; i < rows; i++) {
            suma += mat[i][j];
        }
        printf("Coloana %d: %d\n", j, suma);
    }
}

void schimba_diagonale(int mat[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        int temp = mat[i][i];
        mat[i][i] = mat[i][n - 1 - i];
        mat[i][n - 1 - i] = temp;
    }
    printf("Diagonale schimbate!\n");
}

void matrice_triunghiulara_superioara(int mat[][MAX], int n) {
    int rez[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                rez[i][j] = mat[i][j];
            } else {
                rez[i][j] = 0;
            }
        }
    }
    printf("Matrice triunghiulara superioara:\n");
    afiseaza_matrice(rez, n, n);
}

void matrice_triunghiulara_inferioara(int mat[][MAX], int n) {
    int rez[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                rez[i][j] = mat[i][j];
            } else {
                rez[i][j] = 0;
            }
        }
    }
    printf("Matrice triunghiulara inferioara:\n");
    afiseaza_matrice(rez, n, n);
}

void suma_triunghiulara_superioara(int mat[][MAX], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            suma += mat[i][j];
        }
    }
    printf("Suma triunghiulara superioara: %d\n", suma);
}

void suma_triunghiulara_inferioara(int mat[][MAX], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            suma += mat[i][j];
        }
    }
    printf("Suma triunghiulara inferioara: %d\n", suma);
}

void transpunere(int mat[][MAX], int rows, int cols) {
    int trans[MAX][MAX];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Matrice transpusa:\n");
    afiseaza_matrice(trans, cols, rows);
}

void determinant(int mat[][MAX], int n) {
    if (n == 2) {
        int det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
        printf("Determinant: %d\n", det);
    } else if (n == 3) {
        int det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1])
                - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0])
                + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
        printf("Determinant: %d\n", det);
    } else {
        printf("Determinant doar pentru matrice 2x2 sau 3x3!\n");
    }
}

void verifica_unitar(int mat[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                printf("Matricea nu este unitara!\n");
                return;
            }
            if (i != j && mat[i][j] != 0) {
                printf("Matricea nu este unitara!\n");
                return;
            }
        }
    }
    printf("Matricea este unitara!\n");
}

void verifica_rarefiata(int mat[][MAX], int rows, int cols) {
    int total = rows * cols;
    int zerouri = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                zerouri++;
            }
        }
    }
    float procent = (float)zerouri * 100 / total;
    if (procent >= 70) {
        printf("Matricea este rarefiata (%.2f%% zerouri)!\n", procent);
    } else {
        printf("Matricea nu este rarefiata (%.2f%% zerouri)!\n", procent);
    }
}

void verifica_simetrica(int mat[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                printf("Matricea nu este simetrica!\n");
                return;
            }
        }
    }
    printf("Matricea este simetrica!\n");
}

void roteste_matrice_stanga(int mat[][MAX], int n) {
    int temp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[n - 1 - j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = temp[i][j];
        }
    }
    printf("Matrice rotita stanga!\n");
}

void roteste_matrice_dreapta(int mat[][MAX], int n) {
    int temp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][n - 1 - i] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = temp[i][j];
        }
    }
    printf("Matrice rotita dreapta!\n");
}

void roteste_matrice_sus(int mat[][MAX], int rows, int cols) {
    int temp[MAX];
    for (int j = 0; j < cols; j++) {
        temp[j] = mat[0][j];
    }
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = mat[i + 1][j];
        }
    }
    for (int j = 0; j < cols; j++) {
        mat[rows - 1][j] = temp[j];
    }
    printf("Matrice rotita sus!\n");
}

void roteste_matrice_jos(int mat[][MAX], int rows, int cols) {
    int temp[MAX];
    for (int j = 0; j < cols; j++) {
        temp[j] = mat[rows - 1][j];
    }
    for (int i = rows - 1; i > 0; i--) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = mat[i - 1][j];
        }
    }
    for (int j = 0; j < cols; j++) {
        mat[0][j] = temp[j];
    }
    printf("Matrice rotita jos!\n");
}

void max_pooling(int mat[][MAX], int rows, int cols, int pool_size) {
    int new_rows = rows / pool_size;
    int new_cols = cols / pool_size;
    int rez[MAX][MAX];

    for (int i = 0; i < new_rows; i++) {
        for (int j = 0; j < new_cols; j++) {
            int max = mat[i * pool_size][j * pool_size];
            for (int x = 0; x < pool_size; x++) {
                for (int y = 0; y < pool_size; y++) {
                    if (mat[i * pool_size + x][j * pool_size + y] > max) {
                        max = mat[i * pool_size + x][j * pool_size + y];
                    }
                }
            }
            rez[i][j] = max;
        }
    }
    printf("Max-Pooling rezultat:\n");
    afiseaza_matrice(rez, new_rows, new_cols);
}

void average_pooling(int mat[][MAX], int rows, int cols, int pool_size) {
    int new_rows = rows / pool_size;
    int new_cols = cols / pool_size;
    int rez[MAX][MAX];

    for (int i = 0; i < new_rows; i++) {
        for (int j = 0; j < new_cols; j++) {
            int suma = 0;
            for (int x = 0; x < pool_size; x++) {
                for (int y = 0; y < pool_size; y++) {
                    suma += mat[i * pool_size + x][j * pool_size + y];
                }
            }
            rez[i][j] = suma / (pool_size * pool_size);
        }
    }
    printf("Average-Pooling rezultat:\n");
    afiseaza_matrice(rez, new_rows, new_cols);
}

void sorteaza_spirala(int mat[][MAX], int rows, int cols) {
    int arr[MAX * MAX];
    int k = 0;

    // Copiază matricea într-un vector
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[k++] = mat[i][j];
        }
    }

    // Sortează vectorul
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Copiază înapoi în spirală
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    k = 0;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            mat[top][j] = arr[k++];
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            mat[i][right] = arr[k++];
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                mat[bottom][j] = arr[k++];
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                mat[i][left] = arr[k++];
            }
            left++;
        }
    }

    printf("Matrice sortata in spirala!\n");
}

int main() {
    int arr[MAX], arr2[MAX], arr3[MAX * 2];
    int n, n2;
    int suma, max, min, count, gasit;

    printf("VECTORI \n");
    printf("Numar elemente: ");
    scanf("%d", &n);

    printf("\nCitire tablou:\n");
    citeste_tablou(arr, 0, n);

    printf("\nTablou: ");
    afiseaza_tablou(arr, 0, n);
    printf("\n");

    printf("\n1. Elemente negative: ");
    afiseaza_negative(arr, 0, n);
    printf("\n");

    suma = 0;
    suma_recursiva(arr, 0, n, &suma);
    printf("2. Suma: %d\n", suma);

    max = arr[0];
    maxim_recursiv(arr, 0, n, &max);
    min = arr[0];
    minim_recursiv(arr, 0, n, &min);
    printf("3. Maxim: %d, Minim: %d\n", max, min);

    printf("4. ");
    al_doilea_maxim(arr, n);

    printf("5. ");
    numara_par_impar(arr, n);

    count = 0;
    numara_negative(arr, 0, n, &count);
    printf("6. Negative: %d\n", count);

    printf("7. Copiere tablou:\n");
    copiaza_tablou(arr, arr2, 0, n);
    n2 = n;
    printf("   Copiat: ");
    afiseaza_tablou(arr2, 0, n2);
    printf("\n");

    printf("8. Inserare element:\n");
    insereaza_element(arr, &n, 1, 99);
    printf("   Tablou: ");
    afiseaza_tablou(arr, 0, n);
    printf("\n");

    printf("9. Stergere element:\n");
    sterge_element(arr, &n, 1);
    printf("   Tablou: ");
    afiseaza_tablou(arr, 0, n);
    printf("\n");

    printf("10. Frecventa:\n");
    frecventa_elemente(arr, n);

    printf("11. ");
    afiseaza_unice(arr, n);

    printf("12. ");
    numara_duplicate(arr, n);

    printf("13. Stergere duplicate:\n");
    sterge_duplicate(arr, &n);
    printf("   Tablou: ");
    afiseaza_tablou(arr, 0, n);
    printf("\n");

    printf("14. Imbinare tablouri:\n");
    n2 = 3;
    arr2[0] = 100; arr2[1] = 200; arr2[2] = 300;
    imbinare_tablouri(arr, n, arr2, n2, arr3);
    printf("   Imbinat: ");
    afiseaza_tablou(arr3, 0, n + n2);
    printf("\n");

    printf("15. Inversare tablou:\n");
    int arr_copy[MAX];
    copiaza_tablou(arr, arr_copy, 0, n);
    inverseaza_tablou(arr_copy, 0, n - 1);
    printf("   Inversat: ");
    afiseaza_tablou(arr_copy, 0, n);
    printf("\n");

    printf("16. Separare par/impar:\n");
    int pare[MAX], impare[MAX];
    int n_pare, n_impare;
    separa_par_impar(arr, n, pare, &n_pare, impare, &n_impare);
    printf("   Pare: ");
    afiseaza_tablou(pare, 0, n_pare);
    printf("\n   Impare: ");
    afiseaza_tablou(impare, 0, n_impare);
    printf("\n");

    printf("17. Cautare element:\n");
    gasit = 0;
    cauta_element(arr, 0, n, arr[0], &gasit);
    if (gasit == 0) printf("   Nu gasit!\n");
    else printf("   Total: %d\n", gasit);

    printf("18. Sortare:\n");
    copiaza_tablou(arr, arr_copy, 0, n);
    sorteaza(arr_copy, n, 1);
    printf("   Sortat: ");
    afiseaza_tablou(arr_copy, 0, n);
    printf("\n");

    printf("19. Sortare par/impar separat:\n");
    sorteaza_par_impar_separat(arr, n);

    printf("20. Rotire stanga:\n");
    copiaza_tablou(arr, arr_copy, 0, n);
    roteste_stanga(arr_copy, n, 2);
    printf("   Rotit: ");
    afiseaza_tablou(arr_copy, 0, n);
    printf("\n");

    printf("21. Rotire dreapta:\n");
    copiaza_tablou(arr, arr_copy, 0, n);
    roteste_dreapta(arr_copy, n, 2);
    printf("   Rotit: ");
    afiseaza_tablou(arr_copy, 0, n);
    printf("\n");

    printf("\n MATRICE\n");
    int mat1[MAX][MAX], mat2[MAX][MAX], rez[MAX][MAX];
    int rows, cols;

    printf("Numar randuri: ");
    scanf("%d", &rows);
    printf("Numar coloane: ");
    scanf("%d", &cols);

    printf("\nCitire matrice 1:\n");
    citeste_matrice(mat1, rows, cols);

    printf("\nMatrice 1:\n");
    afiseaza_matrice(mat1, rows, cols);

    printf("\n22. Adunare matrice:\n");
    printf("Citire matrice 2:\n");
    citeste_matrice(mat2, rows, cols);
    aduna_matrice(mat1, mat2, rez, rows, cols);
    printf("Rezultat:\n");
    afiseaza_matrice(rez, rows, cols);

    printf("\n23. Scadere matrice:\n");
    scade_matrice(mat1, mat2, rez, rows, cols);
    printf("Rezultat:\n");
    afiseaza_matrice(rez, rows, cols);

    printf("\n24. Inmultire cu scalar:\n");
    int scalar = 2;
    int mat_copy[MAX][MAX];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat_copy[i][j] = mat1[i][j];
        }
    }
    multiplica_scalar(mat_copy, rows, cols, scalar);
    afiseaza_matrice(mat_copy, rows, cols);

    printf("\n25. Inmultire matrice:\n");
    int r1 = rows, c1 = cols, r2 = cols, c2 = rows;
    printf("Citire matrice 2 pentru inmultire:\n");
    citeste_matrice(mat2, r2, c2);
    multiplica_matrice(mat1, mat2, rez, r1, c1, r2, c2);
    printf("Rezultat:\n");
    afiseaza_matrice(rez, r1, c2);

    printf("\n26. Verificare egale:\n");
    verifica_egale(mat1, mat2, rows, cols);

    if (rows == cols) {
        int n = rows;
        printf("\n27. Suma diagonala principala:\n");
        suma_diagonala_principala(mat1, n);

        printf("\n28. Suma diagonala secundara:\n");
        suma_diagonala_secundara(mat1, n);

        printf("\n29. Suma randuri si coloane:\n");
        suma_rand_coloana(mat1, rows, cols);

        printf("\n30. Schimbare diagonale:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mat_copy[i][j] = mat1[i][j];
            }
        }
        schimba_diagonale(mat_copy, n);
        afiseaza_matrice(mat_copy, n, n);

        printf("\n31. Matrice triunghiulara superioara:\n");
        matrice_triunghiulara_superioara(mat1, n);

        printf("\n32. Matrice triunghiulara inferioara:\n");
        matrice_triunghiulara_inferioara(mat1, n);

        printf("\n33. Suma triunghiulara superioara:\n");
        suma_triunghiulara_superioara(mat1, n);

        printf("\n34. Suma triunghiulara inferioara:\n");
        suma_triunghiulara_inferioara(mat1, n);

        printf("\n35. Transpunere:\n");
        transpunere(mat1, rows, cols);

        printf("\n36. Determinant:\n");
        determinant(mat1, n);

        printf("\n37. Verificare unitara:\n");
        verifica_unitar(mat1, n);

        printf("\n39. Verificare simetrica:\n");
        verifica_simetrica(mat1, n);

        printf("\n40. Rotire stanga:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat_copy[i][j] = mat1[i][j];
            }
        }
        roteste_matrice_stanga(mat_copy, n);
        afiseaza_matrice(mat_copy, n, n);

        printf("\n41. Rotire dreapta:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat_copy[i][j] = mat1[i][j];
            }
        }
        roteste_matrice_dreapta(mat_copy, n);
        afiseaza_matrice(mat_copy, n, n);
    }

    printf("\n38. Verificare rarefiata:\n");
    verifica_rarefiata(mat1, rows, cols);

    printf("\n42. Rotire sus:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat_copy[i][j] = mat1[i][j];
        }
    }
    roteste_matrice_sus(mat_copy, rows, cols);
    afiseaza_matrice(mat_copy, rows, cols);

    printf("\n43. Rotire jos:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat_copy[i][j] = mat1[i][j];
        }
    }
    roteste_matrice_jos(mat_copy, rows, cols);
    afiseaza_matrice(mat_copy, rows, cols);

    printf("\n44. Max-Pooling:\n");
    max_pooling(mat1, rows, cols, 2);

    printf("\n45. Average-Pooling:\n");
    average_pooling(mat1, rows, cols, 2);

    printf("\n46. Sortare spirala:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat_copy[i][j] = mat1[i][j];
        }
    }
    sorteaza_spirala(mat_copy, rows, cols);
    afiseaza_matrice(mat_copy, rows, cols);

    return 0;
}
