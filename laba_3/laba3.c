#include<stdio.h>  
#include<conio.h>  
#include<locale.h>  
void main()
{
	/*���� 3
   1. ��������� ���� � ����� � ��������� ���������� �������� ������� :*/
   /*setlocale(LC_ALL, "Russian");
   int x;
   double y;
   printf("������� x = ");
   scanf_s("%d", &x);
   if (x > -8)
	y = (5 * pow(x, 2) + 2) / (x + 8);
   else
   y=2 * pow(x, 2) + 9;
   printf("\n y1 = %.2lf", y);
  */


  //2 ��������� ���������, ������������, �������� �� ������ ����� ������� 2.//  

  /* setlocale(LC_ALL,"Russian");
  int x;
  printf("������� x = ");
  scanf_s("%d", &x);
  if (x%2==0)
  printf("����� ������ 2");
  else
  printf("����� �������� 2"); */

  /*3. ��������� ���������, ���������� �������  �� ���� ������ ����� ������, � ������� � ������������� ���� �����.*/

  /*int a, b;
  setlocale(LC_ALL, "Russian");
  printf("������� ������ �����: ");
  scanf_s("%d", &a);
  printf("������� ������ �����: ");
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
  printf("����� ������:\n");
  printf("������ �����: %d\n", a);
  printf("������ �����: %d\n", b);*/
	_getch();
}