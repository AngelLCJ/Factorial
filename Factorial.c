#include <stdio.h>
int factorial(int X, int N);
int main()
{
    int X,N;
    printf("Ingrese un numero : \n");
    scanf("%d",&N);
    X=factorial(X,N);
    printf("%d",X);
    return 0;
}
int factorial(int X, int N){
    if(N>0){
    X=factorial(X,N-1);
    X=X*N;
    }else{
    X=1;
    }
    return X;
}
