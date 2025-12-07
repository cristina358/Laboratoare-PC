#include <math.h>
#include <stdio.h>

void Exercitiul_1() {
    int primul_numar, al_doilea_numar;
    printf("Scrie doua numere:\n");
    scanf("%d %d", &primul_numar, &al_doilea_numar);
    if (primul_numar > al_doilea_numar) {
        printf("Numarul mai mare este: %d\n", primul_numar);
    } else {
        printf("Numarul mai mare este: %d\n", al_doilea_numar);
    }
}

void Exercitiul_2() {
    int num_1, num_2, num_3;
    printf("Introdu 3 numere :");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    if (num_1 > num_2 && num_1 > num_3) {
        printf("Cel mai mare nr. este: %d\n ", num_1);
    } else if (num_2 > num_3 && num_2 > num_1) {
        printf("Cel mai mare nr. este: %d\n", num_2);
    } else {
        printf("Cel mai mare nr. este: %d\n", num_3);
    }
}

void Exercitiul_3() {
    int numar;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    if (numar > 0) {
        printf("Numarul este pozitiv ");
    } else if (numar < 0) {
        printf("Numarul este negativ ");
    } else
        printf("Numarul este zero");
}

void Exercitiul_4() {
    int numar;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    if (numar / 5 && numar / 11) {
        printf("Numarul este divizibil cu 5 si 11");
    } else
        printf("Numarul nu este divizibil cu 5 si 11");
}

void Exercitiul_5() {
    int numar;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    if (numar % 2 == 0) {
        printf("Numarul este par");
    } else
        printf("Numarul este impar");
}

void Exercitiul_6() {
    int an;
    printf("Introdu un an:");
    scanf("%d", &an);
    if (an % 4 == 0) {
        printf("Anul este bisect");
    } else
        printf("Anul nu este bisect");
}

void Exercitiul_7() {
    char litera;
    printf("Introdu o litera:");
    scanf("%c", &litera);
    if ((litera >= 'A' && litera <= 'Z') || (litera >= 'a' && litera <= 'z'))
        printf("%c este alfabet\n", litera);
    else
        printf("%c nu este alfabet \n", litera);
}

void Exercitiul_8() {
    char litera;
    printf("Introdu o litera:");
    scanf("%c", &litera);
    if (litera == 'a') {
        printf("Este vocala");
    } else if (litera == 'e') {
        printf("Este vocala");
    } else if (litera == 'i') {
        printf("Este vocala");
    } else if (litera == 'o') {
        printf("Este vocala");
    } else if (litera == 'u') {
        printf("Este vocala");
    } else {
        printf("Este consoana");
    }
}

void Exercitiul_9() {
    char caracter;
    printf("Introdu un caracter:");
    scanf("%c", &caracter);
    if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
        printf("%c este alfabet\n", caracter);
    } else if (caracter >= '0' && caracter <= '9') {
        printf("%c este numar\n", caracter);
    } else
        printf("%c este caracter special\n", caracter);
}

void Exercitiul_10() {
    char caracter;
    printf("Introdu o litera:");
    scanf("%c", &caracter);
    if (caracter >= 'A' && caracter <= 'Z') {
        printf("Litera %c eeste cu majuscula\n", caracter);
    } else if (caracter >= 'a' && caracter <= 'z') {
        printf("Litera %c este cu minuscula\n", caracter);
    }
}

void Exercitiul_11() {
    int numar;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    switch (numar) {
        case 1: printf("Este luni");
            break;
        case 2: printf("Este marti");
            break;
        case 3: printf("Este miercuri");
            break;
        case 4: printf("Este joi");
            break;
        case 5: printf("Este vineri");
            break;
        case 6: printf("Este sambata");
            break;
        case 7: printf("Este duminica");
            break;
        default: printf("Acest numar nu apartine unei zile a saptamanii");
    }
}

void Exercitiul_12() {
    int numar;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    switch (numar) {
        case 1: printf("Ianuarie are 31 zile");
            break;
        case 2: printf("februarie are 28 zile");
            break;
        case 3: printf("martie are 31 zile");
            break;
        case 4: printf("arilie are 30 zile");
            break;
        case 5: printf("mai are 31 zile");
            break;
        case 6: printf("iunie are 30 zile");
            break;
        case 7: printf("iulie are 31 zile");
            break;
        case 8: printf("august are 31 zile");
            break;
        case 9: printf("septembrie are 30 zile");
            break;
        case 10: printf("octombrie are 31 zile");
            break;
        case 11: printf("noiembrie are 30 zile");
            break;
        case 12: printf("decembrie are 31 zile");
            break;
        default: printf("acest numar nu reprezinta nici o luna");
    }
}

void Exercitiul_13() {
    int cantitate;
    int note;
    printf("Introdu un numar:");
    scanf("%d", &cantitate);
    for (int i = 0; i <= cantitate; i++) {
        note = i;
    }
    printf("Numarul de note este %d", note);
}

void Exercitiul_14() {
    int unghi_1;
    int unghi_2;
    int unghi_3;
    printf("Introdu 3 unghiuri:");
    scanf("%d %d %d", &unghi_1, &unghi_2, &unghi_3);
    if (unghi_1 + unghi_2 + unghi_3 == 180) {
        printf("Este un triunghi");
    } else
        printf("Nu este triunghi");
}

void Exercitiul_15() {
    int latura_1, latura_2, latura_3;
    printf("Introdu 3 laturi:");
    scanf("%d %d %d", &latura_1, &latura_2, &latura_3);
    if (latura_1 + latura_2 > latura_3 &&
        latura_1 + latura_3 > latura_2 &&
        latura_2 + latura_3 > latura_1) {
        printf("Este triunghi");
    } else
        printf("Nu este triunghi");
}

void Exercitiul_16() {
    int latura_1, latura_2, latura_3;
    printf("Introdu 3 laturi:");
    scanf("%d", &latura_1);
    scanf("%d", &latura_2);
    scanf("%d", &latura_3);

    if (latura_1 == latura_2 && latura_2 == latura_3 && latura_3 == latura_1) {
        printf("Este triunghi echilateral");
    } else if (latura_1 == latura_2 && latura_2 != latura_3 || latura_1 == latura_3 && latura_3 != latura_2 || latura_3
               == latura_2 && latura_2 != latura_1) {
        printf("Este triunghi isoscel");
    } else {
        printf("Este triunghi scalen");
    }
}

void Exercitiul_17() {
    int a, b, c, x1, x2;
    printf("Introdu a b si c pentru ecuatia de gradul 2:");
    scanf("%d %d %d", &a, &b, &c);
    int delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Rezultatele ecuatiei sunt %d si %d", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Rezultatul ecuatiei este %d ", x1);
    } else {
        printf("Ecuatia nu are solutii,introduceti alte numere");
    }
}


void Exercitiul_1c() {
    int numar, i = 1;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    while (i <= numar) {
        printf("%d\n", i);
        i++;
    }
}

void Exercitiul_2c() {
    int numar, i = 10;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    while (i >= numar) {
        printf("%d\n", i);
        i--;
    }
}

void Exercitiul_3c() {
    char litera = 'a';
    while (litera != '{') {
        printf("%c\n", litera);
        litera++;
    }
}

void Exercitiul_4c() {
    int numar = 1;
    while (numar <= 100) {
        if (numar % 2 == 0) {
            printf("%d \n", numar);
        }
        numar++;
    }
}

void Exercitiul_5c() {
    int numar = 1;
    while (numar <= 100) {
        printf("%d \n", numar);
        numar = numar + 2;
    }
}

void Exercitiul_6c() {
    int numar;
    int suma = 0;
    printf("Introdu un numar:");
    scanf("%d", &numar);
    for (int i = 1; i <= numar; i++) {
        suma = suma + i;
    }
    printf("%d\n", suma);
}

void Exercitiul_7c() {
    int numar;
    int suma = 0;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    for (int i = 0; i <= numar; i = i + 2) {
        suma = suma + i;
    }
    printf("Suma numerelor pare este %d\n", suma);
}

void Exercitiul_8c() {
    int numar;
    int suma = 0;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    for (int i = 1; i <= numar; i = i + 2) {
        suma = suma + i;
    }
    printf("Suma numerelor impare este %d \n", suma);
}

void Exercitiul_9c() {
    int numar;
    int n;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    printf("Introduceti un pana la cat se va inmulti:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int produs;
        produs = i * numar;
        printf("%d X %d = %d\n", i, numar, produs);
    }
}

void Exercitiul_10c() {
    int numar;
    int operatii = 0;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    while (numar > 0) {
        numar = numar / 10;
        operatii++;
    }
    printf("Numarul are %d cifre", operatii);
}

void Exercitiul_11c() {
    int numar, ultima_cifra;
    printf("introduceti un numar:\n");
    scanf("%d", &numar);
    ultima_cifra = numar % 10;
    while (numar > 0) {
        numar = numar / 10;
        if (numar < 10 && numar > 0) {
            printf("primul %d\n", numar);
        }
    }
    printf("ultimul %d \n", ultima_cifra);
}

void Exercitiul_12c() {
    int numar;
    int ultima_cifra;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    ultima_cifra = numar % 10;
    while (numar > 10) {
        numar = numar / 10;
        if (numar < 10 && numar > 0) {
            printf("Primul numar este %d\n", numar);
        }
    }
    printf("ultimu %d \n", ultima_cifra);
    int suma = numar + ultima_cifra;
    printf("Suma primei si ultimei cifre este %d\n", suma);
}

void Exercitiul_13c() {
    int prima_cifra;
    int ultima_cifra;
    int mijlocul_cifrei;
    int puterea = 1;
    int noul_numar;
    int copie;
    int numar;

    printf("Introduceti un numar:\n");
    scanf("%d", &numar);

    ultima_cifra = numar % 10;
    printf("Ultima cifra este : %d\n", ultima_cifra);
    copie = numar;

    while (copie > 0) {
        copie = copie / 10;
        if (copie < 10 && copie > 0) {
            prima_cifra = copie;
            printf("Prima cifra este :%d\n", copie);
        }
        if (copie > 0) {
            puterea = puterea * 10;
        }
    }
    mijlocul_cifrei = (numar % puterea) / 10;

    noul_numar = ultima_cifra * puterea + mijlocul_cifrei * 10 + prima_cifra;

    printf("Noul numar este %d\n", noul_numar);
}

void Exercitiul_14c() {
    int numar;
    int suma = 0;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    while (numar > 0) {
        suma += numar % 10;
        numar = numar / 10;
    }
    printf("Suma cifrei numarului este:%d", suma);
}

void Exercitiul_15c() {
    int numar;
    int produs = 1;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    while (numar > 0) {
        produs *= numar % 10;
        numar = numar / 10;
    }
    printf("Produsul cifrelor numarului este:%d", produs);
}

void Exercitiul_16c() {
    int numar;
    int inversul = 0;
    int cifra;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    while (numar > 0) {
        cifra = numar % 10;
        inversul = inversul * 10 + cifra;
        numar = numar / 10;
    }
    printf("Inversul numarului este:%d", inversul);
}

void Exercitiul_17c() {
    int numar;
    int inversul = 0;
    int cifra;
    int copie;
    printf("Introduceti un numar:\n");
    scanf("%d", &numar);
    copie = numar;
    while (copie > 0) {
        cifra = copie % 10;
        inversul = inversul * 10 + cifra;
        copie = copie / 10;
    }
    if (numar == inversul) {
        printf("numarul este palindrom", numar);
    } else {
        printf("numarul nu este palindrom", numar);
    }
}

void Exercitiul_18c() {
    long long numar;
    printf("Introduceti un numar:\n");
    scanf("%lld", &numar);
    for (int i = 0; i <= 9; i++) {
        int frecventa = 0;
        long long copie = numar;
        while (copie > 0) {
            if (copie % 10 == i) {
                frecventa++;
            }
            copie = copie / 10;
        }
        if (frecventa > 0) {
            printf("Frecventa cifrei %d este %d\n", i, frecventa);
        }
    }
}

void Exercitiul_19c() {
    int numar, cifra, copie;
    printf("Introduceti un numar: ");
    scanf("%d", &numar);
    if (numar == 0) {
        printf("zero\n");
    }
    if (numar < 0) {
        printf("minus ");
        numar = -numar;
    }
    int invers = 0;
    copie = numar;
    while (copie > 0) {
        cifra = copie % 10;
        invers = invers * 10 + cifra;
        copie /= 10;
    }
    while (invers > 0) {
        cifra = invers % 10;
        switch (cifra) {
            case 0: printf("zero ");
                break;
            case 1: printf("unu ");
                break;
            case 2: printf("doi ");
                break;
            case 3: printf("trei ");
                break;
            case 4: printf("patru ");
                break;
            case 5: printf("cinci ");
                break;
            case 6: printf("sase ");
                break;
            case 7: printf("sapte ");
                break;
            case 8: printf("opt ");
                break;
            case 9: printf("noua ");
                break;
        }
        invers /= 10;
    }
    printf("\n");
}

void Exercitiul_20c() {
    printf("Caracterele afisate sunt:\n");
    for (int i = 0; i < 128; i++) {
        printf("(%d-%c)", i, i);
    }
}
int main() {
    Exercitiul_20c();
    return 0;
}
