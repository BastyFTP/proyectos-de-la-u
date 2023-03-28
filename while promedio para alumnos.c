/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 float nota,sumanota=0,promedio;
 int contador,n,aprobados=0,reprobados=0;
 printf("Digame cuantas notas desea ingresar: ");
 scanf("%d",&n);
 contador = 1;
 while (contador <= n)
{
 printf ("ingrese nota: ");
 scanf ("%f",&nota);
 sumanota = sumanota + nota;
 if (nota >= 3.95)
 aprobados = aprobados +1 ;
 else 
 reprobados = reprobados + 1 ;
}
promedio = sumanota / n;
printf ("el promedio del curso es : %.2f", promedio);
printf ("la cantidad de alumnos aprobados son: %d\n",aprobados);
printf ("la cantidad de alumnos reprobados son %d",reprobados);

}
