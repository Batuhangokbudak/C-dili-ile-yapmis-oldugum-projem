#include <stdio.h>

int main()
{
	int sayi = 0;
	int birler, onlar, yuzler, binler, onbinler;
	int ch;
	printf("--------------------------------------------------------------------\n");
	printf("*************************Sifreleme Programi*************************\n");
	printf("--------------------------------------------------------------------\n");

	while (1)
	{
		printf("Lutfen 5 basamakli bir sayi giriniz: ");
		scanf_s("%d", &sayi);
		if (sayi > 9999 && sayi < 100000)
		{
			printf("Sayi girisiniz basarili, girilen sayiyi sifrelemek icin P ye Cikmak icin E ye basiniz\n");
			ch = getch();
			if (ch == 'p' || ch == 'P')
			{
				birler = ((((sayi % 1000) % 100) % 10) + 9) % 10;
				onlar = ((((sayi % 100) - birler) / 10) + 9) % 10;
				yuzler = (((sayi % 1000) / 100) + 9) % 10;
				binler = (((sayi / 1000) % 10) + 9) % 10;
				onbinler = (((sayi / 10000) % 100) + 9) % 10;

				printf("Sifreli sayiniz\t\t\t:%d%d%d%d%d\n", yuzler, onlar, onbinler, binler, birler);
				printf("---------------------------------");
				break;
			}
			else if (ch == 'e' || ch == 'E')
			{
				printf("Cikis yaptiniz...\n");
				printf("----------------------");
				break;
			}
		}

	}
	return 0;
}