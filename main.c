#include <stdio.h>

int main(void) {
    float num, prezzo, totale;
    printf("Inserisci il numero di prodotti: ");
    scanf("%f", &num);
    printf("Inserisci il prezzo di prodotti: ");
    scanf("%f", &prezzo);
    totale = num * prezzo;
    printf("il totale del prezzo è: %f ",totale);
    if (totale >= 50) {
        totale=totale*0.20;
        printf("il prezzo e' : %f perche' uno sconto del 20%% e' stato applicato",totale);
    }
    if(totale >= 10) {
        totale=totale*0.10;
        printf("il prezzo e' : %f perche' uno sconto del 10%% e' stato applicato",totale);
    }
        else {
            printf("il prezzo non eccede i 10 euro percio' nessun sconto è applicato.");
        }
        }
