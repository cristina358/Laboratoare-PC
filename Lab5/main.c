#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

void citeste_sir(char sir[]) {
    printf("Introduceti sirul: ");
    scanf(" %[^\n]", sir);
}

void lungime_sir() {
    char sir[MAX];
    citeste_sir(sir);
    int lungime = strlen(sir);
    printf("Lungimea sirului: %d\n", lungime);
}

void copiaza_sir() {
    char sir1[MAX], sir2[MAX];
    citeste_sir(sir1);
    strcpy(sir2, sir1);
    printf("Sirul copiat: %s\n", sir2);
}

void concateneaza_siruri() {
    char sir1[MAX], sir2[MAX];
    printf("Introduceti primul sir: ");
    scanf(" %[^\n]", sir1);
    printf("Introduceti al doilea sir: ");
    scanf(" %[^\n]", sir2);
    strcat(sir1, sir2);
    printf("Sirurile concatenate: %s\n", sir1);
}

void minuscule_la_majuscule() {
    char sir[MAX];
    citeste_sir(sir);
    for (int i = 0; sir[i] != '\0'; i++) {
        if (islower(sir[i])) {
            sir[i] = toupper(sir[i]);
        }
    }
    printf("Sirul convertit: %s\n", sir);
}

void numara_vocale() {
    char sir[MAX];
    citeste_sir(sir);
    int vocale = 0;
    for (int i = 0; sir[i] != '\0'; i++) {
        char c = tolower(sir[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocale++;
        }
    }
    printf("Numar vocale: %d\n", vocale);
}

void numara_cuvinte() {
    char sir[MAX];
    citeste_sir(sir);
    int cuvinte = 0;
    int in_cuvant = 0;
    for (int i = 0; sir[i] != '\0'; i++) {
        if (sir[i] != ' ' && sir[i] != '\t' && sir[i] != '\n') {
            if (!in_cuvant) {
                cuvinte++;
                in_cuvant = 1;
            }
        } else {
            in_cuvant = 0;
        }
    }
    printf("Numar cuvinte: %d\n", cuvinte);
}

void invers_sir() {
    char sir[MAX];
    citeste_sir(sir);
    int lungime = strlen(sir);
    for (int i = 0; i < lungime / 2; i++) {
        char temp = sir[i];
        sir[i] = sir[lungime - 1 - i];
        sir[lungime - 1 - i] = temp;
    }
    printf("Sirul inversat: %s\n", sir);
}

void verifica_palindrom() {
    char sir[MAX];
    citeste_sir(sir);
    int lungime = strlen(sir);
    int este_palindrom = 1;
    for (int i = 0; i < lungime / 2; i++) {
        if (tolower(sir[i]) != tolower(sir[lungime - 1 - i])) {
            este_palindrom = 0;
            break;
        }
    }
    if (este_palindrom) {
        printf("Sirul este palindrom!\n");
    } else {
        printf("Sirul nu este palindrom!\n");
    }
}

void prima_aparitie_caracter() {
    char sir[MAX], caracter;
    citeste_sir(sir);
    printf("Introduceti caracterul de cautat: ");
    scanf(" %c", &caracter);
    char *pozitie = strchr(sir, caracter);
    if (pozitie != NULL) {
        printf("Prima aparitie la pozitia: %ld\n", pozitie - sir);
    } else {
        printf("Caracterul nu a fost gasit!\n");
    }
}

void elimina_toate_aparitii() {
    char sir[MAX], caracter;
    citeste_sir(sir);
    printf("Introduceti caracterul de eliminat: ");
    scanf(" %c", &caracter);
    int j = 0;
    for (int i = 0; sir[i] != '\0'; i++) {
        if (sir[i] != caracter) {
            sir[j++] = sir[i];
        }
    }
    sir[j] = '\0';
    printf("Sirul dupa eliminare: %s\n", sir);
}

void afiseaza_meniu() {
    printf("\n=== MENIU OPERATII SIRURI DE CARACTERE ===\n");
    printf("1.  Lungimea unui sir\n");
    printf("2.  Copiaza un sir in altul\n");
    printf("3.  Concateneaza doua siruri\n");
    printf("4.  Converteste minuscule in majuscule\n");
    printf("5.  Numara vocale\n");
    printf("6.  Numara cuvinte\n");
    printf("7.  Inversul unui sir\n");
    printf("8.  Verifica daca este palindrom\n");
    printf("9.  Prima aparitie a unui caracter\n");
    printf("10. Elimina toate aparitiile unui caracter\n");
    printf("0.  Iesire\n");
    printf("Alegeti optiunea: ");
}

int main() {
    int optiune;

    printf("=== PROGRAM OPERATII SIRURI DE CARACTERE ===\n");
    printf("Aceasta lucrare contine 10 probleme selectate.\n");

    do {
        afiseaza_meniu();
        scanf("%d", &optiune);
        getchar(); // Consumă newline-ul

        switch (optiune) {
            case 1: lungime_sir(); break;
            case 2: copiaza_sir(); break;
            case 3: concateneaza_siruri(); break;
            case 4: minuscule_la_majuscule(); break;
            case 5: numara_vocale(); break;
            case 6: numara_cuvinte(); break;
            case 7: invers_sir(); break;
            case 8: verifica_palindrom(); break;
            case 9: prima_aparitie_caracter(); break;
            case 10: elimina_toate_aparitii(); break;
            case 0: printf("La revedere!\n"); break;
            default: printf("Optiune invalida!\n"); break;
        }

        if (optiune != 0) {
            printf("\nApasati Enter pentru a continua...");
            getchar();
        }
    } while (optiune != 0);

    return 0;
}
