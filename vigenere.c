
#include<stdio.h>
#include<string.h>
 
int main(){
    char messaggio[] = "UN MATEMATICO TRASFORMA CAFFE IN TEOREMI";
    char chiave[] = "CIAO";
    int LM = strlen(messaggio), LC = strlen(chiave), i, j;
 
    char nchiave[LM], criptato[LM], decriptato[LM];
 
    //genera la chiave
    for(i = 0, j = 0; i < LM; ++i, ++j){
        if(j == LC)
            j = 0;
        nchiave[i] = chiave[j];
    }
 
    nchiave[i] = '\0';
 
    //cifratura
    for(i = 0; i < LM; ++i)
        criptato[i] = ((messaggio[i] + nchiave[i]) % 26) + 'A';
 
    criptato[i] = '\0';
 
    //decifrazione
    for(i = 0; i < LM; ++i)
        decriptato[i] = (((criptato[i] - nchiave[i]) + 26) % 26) + 'A';
 
    decriptato[i] = '\0';
 
    printf("Messaggio originale: %s", messaggio);
    printf("\nchiave inserita: %s", chiave);
    printf("\nchiave generata: %s", nchiave);
    printf("\nCifratura: %s", criptato);
    printf("\nDecifrazione: %s", decriptato);
    printf("\n"); 
    return 0;
}