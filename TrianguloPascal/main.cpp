#include <iostream>
#include <stdio.h>

using namespace std;
void pascal(int T[100], int n, int c)
{   int i;
    int aux[c+1];
    aux[0]=1;
    aux[c]=1;
    if(c<=n)
    {
        for(i=1; i<c; i++)
            aux[i]=T[i-1]+T[i];
        for(i=0;i<=c; i++)
            printf("[%i] ", aux[i]);
        c=c+1;
        printf("\n");
        pascal(aux, n, c);
    }

}

int main()
{
    int n, T[0];
    T[0]=1;
    printf("ingresar grado n:\n");
    scanf("%i", &n);
    pascal(T, n, 0);
    return 0;
}