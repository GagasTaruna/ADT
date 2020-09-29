#include <stdlib.h>
#include <stdio.h>

typedef struct
{
 char nama[100];
 int nik;
 char alamat[100];
 char kewarganegaraan[5];
 char jenis_kelamin[10];
 char agama[10];
}ktp;

int main()
{
 ktp ktpku;
 printf("NIK = ");
 scanf("%d",&ktpku.nik);
 printf("Nama = ");
 scanf("%s",&ktpku.nama);
 fflush(stdin);
 printf("Jenis Kelamin = ");
 scanf("%s",&ktpku.jenis_kelamin);
 printf("Alamat = ");
 scanf("%s",&ktpku.alamat);
 printf("Agama = ");
 scanf("%s",&ktpku.agama);
 fflush(stdin);
 printf("Kewarganegaraan = ");
 scanf("%s",&ktpku.kewarganegaraan);

 return 0;
}
