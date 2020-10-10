#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int *mas, n, kolvo=0,temp=0;
	printf("Введите количество элементов: ");
	scanf_s("%d", &n);
	mas = (int*)malloc(n*sizeof(int)); // выделяем память под динамический массив
	for (int i = 0; i < n; i++)
	{
		printf("mas[%d]= ", i);     // заполняем вручную
		scanf_s("%d", &mas[i]);
	}
	for (int i = 0; i < n; i++)
	{
		temp = i;
		while ((mas[i] < mas[i + 1]))   // проверка членов
		{
			i++;
		}
		if (temp != i)
			kolvo++;
	}
	printf("Количество промежутков возрастания равно %d", kolvo);
	return 0;
}