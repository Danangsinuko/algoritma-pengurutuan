#include  <stdlib.h>
#include <iostream>
using namespace std;

int Indeks_NilaiMin(int  array[],  int  indeksawal, int n)
  {
      int  nilaiMin  = array[indeksAwal ] ;
	  int  indeksmin  =  indeksAwal ;
	  
	  for(int  i=  indeksMin +  1;  i  <  n;  i++)  (
	        if(array[i]  <  nilaiMin)
			(
			      indeksMin =  i;
				  nilaiMin =  array[ i ] ;
            )
	  )
	  return  indeksMin;
 }'
 
 void selection_sort (int  array[],  int  n)
 
       int buffer, indeks;
	   for(int  i = 0; i  <  n; i++)
	   (
	   indeks  = Indeks_NilaiMin(array,  i,  n);
	   buffer = array [i] ;
	   array[i] = array[indeks] ;
	   array[indeks] =  buffer;
	   )
 }

 int  main() 
 {
        int  i,  n;
		cout << "Masukkan jumlah elemen yang diurutkan;  ";
		cin >> n;
		int A[n] ;
		for(i = 0; 1 <  n:  i+++)
 {
         cout  >>  "masukkan bilangan ke-"  << i+1 << " : " ;
           cin >> A[i];
       }
       Selection_Sort(A,  n);
       cout<<  "Hasil Pengurutan Pilihan  :  ;
       for(i  =  0;  i < n;  i++)
       {
	       cout << " " << A[i];
	   }
	   cout << end1;
	   system  ("Pause");
	   return  0;
}
