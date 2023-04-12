#include <stdio.h>
typedef float notas [80];
void llenar (notas,int);
float promedio (notas, int);
int main()
{
    notas s415;
    int e;
    printf("ingrese total de estudiantes:");
    scanf("%d",&e);
    llenar(s415,e);
    printf("el promedio de la seccion es: %f",promedio(s415,e));
    return 0;
}
void llenar(notas s,int e)
{
    int i;
        for(i=0;i<e;i++)
        {
            scanf("%f", s[i]);
        }
}
float promedio(notas z,int a)
{
    int j;
    float s=0;
        for(j=0;j<a;j++)
        s+=z[j];
       return s/a;

}
