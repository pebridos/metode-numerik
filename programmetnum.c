# include <conio.h>
# include <stdio.h>

int main ()
{
 float a,b,hasil;
 char pilih;
 
awal2:
 printf("\n Masukan Nilai a\t: ");
 scanf("%f",&a);
 printf("\n\n Masukan Nilai b\t: ");
 scanf("%f",&b);
 
	awal:
 system("cls");
			printf("Menu Data Peserta ");
			printf("\n");
			printf("1. a + b \n");
			printf("2. a - b \n");
			printf("3. a * b \n");
			printf("4. a / b \n");
			printf("5. a^b \n");
			printf("6. Hitung deret f(x) 2x^2-4x+1 \n");
			printf("7. Ubah nilai a dan b \n");
			printf("\n===========================\n");
 printf("\n\n Pilih Menu \t: ");
 scanf("%s",&pilih);

switch(pilih)
{
case '1':
		system("cls");
		hasil = a+b;
		printf("Hasil penjumlahannya adalah \t: %g",hasil);
		printf("\nTekan enter untuk kembali... \n");
		getch();
		goto awal;
		break;
case '2':
	system("cls");
		hasil = a-b;
		printf("Hasil pengurangannya adalah \t: %g",hasil);
		getch();
		goto awal;
		break;
case '3':
		system("cls");
		hasil = a*b;
		printf("Hasil perkaliannya adalah \t: %g",hasil);
		getch();
		goto awal;
		break;
case '4':
		system("cls");
		hasil = a/b;
		printf("Hasil pembagiannya adalah \t: %g",hasil);
		printf("\nTekan enter untuk kembali... \n");
		getch();
		goto awal;
		break;
case '5':
		system("cls");
		//kamus
		int i;
		hasil = 1;
		//algoritma
		
			for(i=0;i<b;i++){
				hasil = hasil * a;
			}
		
		printf("Hasil perpangkatannya adalah \t: %g",hasil);
		printf("\nTekan enter untuk kembali... \n");
		getch();
		goto awal;
		break;
case '6':
		system("cls");
		for(i=a;i<=b;i++){
		hasil = (2*(a*a)) - ((4*a)+1); 
		printf("Deret hasilnya adalah \t: %g \n",hasil);
		a++;
	}
		printf("\nTekan enter untuk kembali... \n");
		getch();
		goto awal;
		break;
case '7':
		system("cls");
		goto awal2;
		break;


default :
		printf("Anda salah input\n");
}


}
