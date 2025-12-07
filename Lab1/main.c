#include <stdio.h>
#include<math.h>

void Operatori_aritmetici() {
    int numar1 = 3;
    int numar2 =9;
    printf("Primul numar este %d,al doilea numar este %d\n",numar1,numar2);
    printf("Suma celor doua numere este %d\n",numar1+numar2);
    printf("Diferenta celor doua numere este %d\n",numar2-numar1);
    printf("Produsul celor doua numere este %d\n",numar1*numar2);
    printf("Catul celor doua numere este %d\n",numar2/numar1);
    printf("Modulul acestor doua numere este %d\n",numar2%numar1);
    printf("Incrementarea primului numar este %d\n",++numar1);
    printf("Decrementa primului numar este %d\n",--numar1);
}
    void Functii_matematice() {
    int numar1 = 3;
    int numar2 =9;
    printf("Radacina patrata a numarului 3 este %f\n",sqrt(numar1));
    printf("Logaritmul numarului 3 este %f\n",log(numar1));
    printf("Numarul ridicat la putere este %.0f\n",pow(numar1,numar2));
    printf("Valoarea pozitiva a numarului este %d\n",abs(numar1));
    printf("Primul numar rotunjit in sus este %.0f\n",ceil(numar1));
    printf("Primul numar rotunjit in jos este %.0f\n",floor(numar1));
    }

void Operatori_logici() {
    int numar1 = 3;
    int numar2 =9;
    if (numar1<numar2) {
        printf("Da,este adevarat \n");
    }
    if (numar2>numar1) {
        printf("Exact,este complet un adevar \n");
    }
    if (numar2>=numar1) {
        printf("Nu,este o minciuna \n");
    }
    if (numar2!=numar1) {
        printf("Este un adevar \n");
    }
    if (numar2==numar1) {
        printf("Este este este este este este este este un adevar \n");
    }else {
        printf("Eu sunt corect\n");
    }
    if (numar1>=numar2) {
        printf("Este o minciuna \n");
    } else {
        printf("Este corect \n");
    }
    if (numar1>0 && numar2>0) {
        printf("Valorile sunt mai mari ca 0 \n");
    }
    if (numar1<0 || numar2<0) {
        printf("Valorile sunt mai mici ca 0 \n");
    }else {
        printf("Valorile sunt mai mari ca 0 \n");
    }
}
void Tipuri_de_date() {
    char litera ='A';
    printf("Afiseaza litera  %c\n",litera);
    float numar = 2.77;
    printf("Afiseaza cifrele %.2f\n",numar);
    int numar_4 = 3;
    printf("Afiseaza numarul %d\n",numar_4);
    long grade =38;
    printf("Afara sunt %ld grade \n",grade);
    unsigned varsta = 20;
    printf("Varsta lui este de %u ani\n",varsta);
    short proiecte = 120;
    printf("Toti impreuna au facut %u proiecte \n",proiecte);
    double numar5 = 5.90;
    printf("Afiseaza numarul %.2f\n",numar5);
    int numarul_meu;
    printf("Tapeaza un numar si apasa enter:\n");
    scanf("%d",&numarul_meu);
    printf("Numarul tau este %d \n",numarul_meu);
}
void Ex_suplimentar() {
    double s,a,b,t;//folosit pentru numerele reale cu zecimale,necesar pentru trigonometrie
    a=-0.5;
    b=1.7;
    t=0.4;
    s=b*sin(a*pow(t,2)*cos(2*t)-1);
    printf("Rezultatul este:%lf\n",s);//afisarea numerelor reale de tip double
}






int main(){
Ex_suplimentar();
    return 0;
}
