#include <stdio.h>

int main()
{ 
	printf("%d \n", 2+2); //dodawanie
	printf("%d \n", 2-2); //odejmowanie
	printf("%d \n", 2*2); //mnożenie
	printf("%d \n", 2/2); //dzielenie
	printf("%d \n", 22|42); //alternatywa bitowa, suma bitowa
	printf("%d \n", 802&22); //koniunkcja bitowa, iloczyn bitowy
	printf("%d \n", ((2<3)||(2==2))); //alternatywa
	printf("%d \n", ((2<3)&&(2==2))); //koniunkcja
	printf("%d \n", 2>=2); //porównanie "większe lub równe"
	printf("%d \n", 2<2); //porównanie "mniejsze"
	printf("%d \n", 2>2); // porównanie "większe"
	printf("%d \n", 2==2); //porównanie "równa się"
	printf("%d \n", 2<=2); //porównanie "mniejsze lub równe"
	printf("%d \n", 2>>2); //przesunięcie bitowe w prawo
	printf("%d \n", 2<<2); //przesunięcie bitowe w lewo

return 0;
}
