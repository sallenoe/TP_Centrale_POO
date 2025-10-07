#include <stdio.h>
#include <stdlib.h>
#define T 2 

typedef struct{
    float el[T][T];
} matrix_t; 


void exchange(int* a, int* b){
    printf("a = %d, b = %d\n",*a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d, b = %d\n",*a,*b);

}

matrix_t saisir(){
    matrix_t matrix; 
    for (int li = 0 ; li < T ; ++li){
        for (int co = 0 ; co < T ; ++co) {
            printf("M[%d][%d] = ", li ,co);
            scanf("%f", &matrix.el[li][co]);
        }
    }
    return matrix; 
}

void afficher(matrix_t M){
    for (int li = 0 ; li < T ; ++li){
        for (int co = 0 ; co < T ; ++co) {
            printf("%f ", M.el[li][co]);
        }
        printf("\n");
    }
}

matrix_t additioner(matrix_t A, matrix_t B){
    matrix_t M;
    for (int li = 0 ; li < T ; ++li){
        for (int co = 0 ; co < T ; ++co) {
            M.el[li][co] = A.el[li][co]+B.el[li][co];
        }
    }
    return M;  
}

matrix_t multiplier(matrix_t A,matrix_t B){
    matrix_t M; 
    for (int li = 0 ; li < T ; ++li){
        for (int co = 0 ; co < T ; ++co) {
            for(int k=0;k<T;k++){
                M.el[li][co] += A.el[li][k]*B.el[k][co];
            }
        }
    }
    return M;
}

int menu(){
    int res;
    printf("Opération à effecter ? 1 pour addition et 2 pour multiplication\n");
    scanf("%d",&res);
    return res;
}

typedef struct{
    int nbligne;
    int nbcol;
    float** elem;
} matrix_alt_t;

void SaisirMatrice(){
    matrix_alt_t M; 
    printf("Nombre de ligne = ");
    scanf("%d\n",&M.nbligne);
    printf("Nombre de colonne = ");
    scanf("%d\n",&M.nbcol);
    float** matrice = malloc(sizeof(float*)*M.nbcol);
    for(int i=0;i<M.nbcol;i++){
        matrice[i]=malloc(sizeof(float)*M.nbligne);
        for(int j=0;i<M.nbligne;j++){
            printf("M[%d][%d] =",i,j);
            scanf("%f\n",&matrice[i][j]);
        }
    }
    M.elem = matrice; 
}

void LibererMatrice(matrix_alt_t M){
    for(int i=0;i<M.nbligne;i++){
        for(int j=0 )
    }
}

int main(){
    /*
    int res1=4;
    int res2 = 5;
    exchange(&res1, &res2);
    matrix_t test = saisir();
    matrix_t test2 = saisir();

    int ope = menu();

    if(ope==1){
        afficher(additioner(test,test2));
    }else{
        afficher(multiplier(test,test2));
    }*/
    SaisirMatrice();
    //int ** matrice = SaisirMatrice();

    return 0;
}