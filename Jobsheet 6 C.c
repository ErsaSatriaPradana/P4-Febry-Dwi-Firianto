#include <stdio.h>

int main() {
int i, j, m, n;
int matriks[14][10];
int transpose[14][10];
printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf ("Nama      : Ersa Satria Pradana\n");
printf ("NIM       : F1B019048\n");
printf ("Kelompok  : 10\n");
printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

printf("Masukkan jumlah baris matriks: ");
scanf("%d", &m);
printf("Masukkan jumlah kolom matriks: ");
scanf("%d", &n);

printf("Masukkan bilangan matriks:\n");
  for(i = 0; i< m; i++){
    for(j = 0; j < n; j++){
scanf("%d", &matriks[i][j]);
    }
  }for (i = 0; i< m; i ++){
    for(j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }printf("Hasil transpose matriks:\n");
  for (i = 0; i< n; i ++){
    for(j = 0; j < m; j++){
	printf("%d\t",transpose[i][j]);
    }printf("\n");
  }return 0;
}
