#include <stdio.h>
main()
{
int x [5];
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("Masukan 2 NIM terakhir anda\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("nim nilai 1 : ");
scanf("%i",&x[0]);
printf("nim nilai 2 : ");
scanf("%i",&x[1]);
printf("nim nilai 3 : ");
scanf("%i",&x[2]);
printf("nim nilai 4 : ");
scanf("%i",&x[3]);
printf("nim nilai 5 : ");
scanf("%i",&x[4]);
printf("\n");

printf("nim ke-1 = %i\n",x[0]);
printf("nim ke-2 = %i\n",x[1]);
printf("nim ke-3 = %i\n",x[2]);
printf("nim ke-4 = %i\n",x[3]);
printf("nim ke-5 = %i\n",x[4]);
return 0;
}
