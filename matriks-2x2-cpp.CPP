#include <conio.h>
#include <iostream.h>

main ()

{
 int i, j;
 int data1[2][2] = {{2,3},{4,2}};
 int data2[2][2] = {{6,2},{8,5}};
 int hasil[2][2];

 cout << "Matriks A : " <<endl;
 for (i = 0; i < 2; i++)
 {
  for (j = 0; j < 2; j++)
  {
   cout << data1 [i] [j];
   cout << "	";
  }
 cout << endl;
 }

 cout << endl;

 cout << "Matriks B : " <<endl;
 for (i = 0; i < 2; i++)
 {
  for (j = 0; j < 2; j++)
  {
   cout << data2 [i] [j];
   cout << "	";
  }
 cout << endl;
 }

 cout << endl;

 for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++)
  {
   hasil[i][j] = data1[i][j] + data2[i][j];
  }
 }

 cout << endl;

 cout << "Hasil Penjumlahan Matriks A + B : " <<endl;
 for (i = 0; i < 2; i++)
 {
  for (j = 0; j < 2; j++)
  {
   cout << hasil[i][j];
   cout << "	";
  }
 cout << endl;
 }

getch ();
}
