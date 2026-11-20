//git add testwdh.c; git commit -m "Code fertig"; git push; git log --oneline
#include <stdio.h>

//funktion zum zaehlen
int strlenght(){
    int anz = 0;    //anzahl

    for (int i = 0; binaer[i] != '\0'; i++){ //zaehlt die zeichen ab
        anz++;
    }
    return anz;
}

//funktion zu potenzrechnen
int power(int base, int exp){
    for (int i = 0; i <= exp; i++){ //wenn die exponentzahl nicht erreicht ist, base mit sich selbst multipliziert werden
        base *= base;
    }
    return base;
}

int main(){
    int binaer[100];
    scanf("%s", &binaer);
    int var = 1;    //variable fuer zaehlen
    int ans = 0;    //answer
    
    int anz = strlenght();

    for (int i = anz; anz != 0; i--){ //zurueckzaehlen, von rechts nach links
        if (binaer[i] != '1' || '0'){ //nur 1 oder 0 erlaubt
            return -1;
        }

        var = var * 2;  //variable die mir jedem binaer[i] mal 2 multipliziert wird
        if(binaer[i] == '1'){
            ans + var;  //wenn es 1 ist, dann zaelt es das ergebnis zusammen. bei null wird nichts addiert und es geht weiter
        }
        return ans;
    }
    printf("Laenge lautet: %d\nAntwort auf potenz lautet: %d\nDezimal von Binaer lautet: %d", strlenght(), power(), ans);
}