/*
Implementare un programma in C che riceva da linea di comando una stringa.
Il programma dovrà trasformare la stringa in lettere maiuscole e stamparla sullo schermo.
L'opzione '-c <numero>' tra il nome del programma e la stringa permette di convertire in maiuscolo 
e stampare solo i primi <numero> caratteri della stringa.
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
#define LUN 50
 
 
int main(int argc, char *argv[]) {
    int i;
    char s[LUN+1];
    int lunghezza_stringa;
 
    /* Un esempio di esecuzione del programma e':
       nome_prog.exe -c 4 sTriNga
       le variabili *argv[] e argc conterranno i seguenti valori:
 
    argv[0]="nome_prog.exe"
    argv[1]="-c"
    argv[2]="4"
    argv[3]="sTriNga"
    argc=4
 
    E l'output del programma sara': STRI
    */
 
 
    if(argc==4){ /* Nel caso in cui l'utente abbia specificato l'opzione -c */
 
      lunghezza_stringa = atoi(argv[2]);
      strncpy(s, argv[3], lunghezza_stringa);
      s[lunghezza_stringa] = '\0';
 
    }else{ /* Nel caso in cui l'unico argomento sia <stringa> */
 
      strcpy(s, argv[1]);
      lunghezza_stringa = strlen(s);
 
    }
 
    for(i=0; i<lunghezza_stringa; i++){
      s[i] = toupper(s[i]);
    }
 
    printf("La stringa risultante e': %s\n", s);
 
    return 0;
}
