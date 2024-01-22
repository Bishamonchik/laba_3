#include<stdio.h>  
#include<conio.h>  
#include<locale.h>  
void main()
{
	/*ЋјЅј 3
   1. —оставьте блок Ц схему и программу вычислени€ значени€ функции :*/
   /*setlocale(LC_ALL, "Russian");
   int x;
   double y;
   printf("¬ведите x = ");
   scanf_s("%d", &x);
   if (x > -8)
	y = (5 * pow(x, 2) + 2) / (x + 8);
   else
   y=2 * pow(x, 2) + 9;
   printf("\n y1 = %.2lf", y);
  */


  //2 —оставьте программу, определ€ющую, €вл€етс€ ли данное число кратным 2.//  

  /* setlocale(LC_ALL,"Russian");
  int x;
  printf("¬ведите x = ");
  scanf_s("%d", &x);
  if (x%2==0)
  printf("„исло кратно 2");
  else
  printf("„исло некратно 2"); */

  /*3. —оставьте программу, замен€ющую большее  из двух данных чисел суммой, а меньшее Ц произведением этих чисел.*/

  /*int a, b;
  setlocale(LC_ALL, "Russian");
  printf("¬ведите первое число: ");
  scanf_s("%d", &a);
  printf("¬ведите второе число: ");
  scanf_s("%d", &b);
  if (a > b)
  {
   a = a + b;
   b = a * b;
  }
  else
  {
   b = a + b;
   a = a * b;
  }
  printf("ѕосле замены:\n");
  printf("ѕервое число: %d\n", a);
  printf("¬торое число: %d\n", b);*/
	_getch();
}