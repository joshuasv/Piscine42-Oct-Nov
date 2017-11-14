#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
//char *ft_strrev(char *str);
//int ft_atoi(char *str);
//void ft_sort_integer_table(int *tab, int size);


void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char str[20]="reversed";
	char *p;
//	p = ft_strrev(str);
	char arr[5] = "-123";
	int array[6] = {1, -89, 5, 2000, 0, 3};
	int i = 0;
	char howmany[60] = "banana";
	char putstr[60] = "Hell yeee I can put a string!";
	int aumod = 10;
	int bumod = 3;
	int div;
	int mod;
	int swp1 = 10;
	int swp2 = 5;
	int hm = ft_strlen(howmany); 
//	ft_sort_integer_table(array, 6);
	ft_ultimate_div_mod(&aumod, &bumod);
	ft_div_mod(10, 3, &div, &mod);
	ft_swap(&swp1, &swp2);
	
	printf("\n\nARE ALL THESE STATEMENTS TRUE?\n\n");
	printf("EX02:\nSWAP: 10 should become %d and 5 should become %d\n", swp1, swp2);
	printf("EX03:\n10 / 3 = %d with remainder %d\n", div, mod); 
	printf("EX04:\n10 / 3 = %d with remainder %d\n", aumod, bumod); 
	printf("EX05:\ncan you put a string punk?\n"); 
	ft_putstr(putstr);
	printf("\nEX06:\nThe word 'banana' is %d letters long\n", hm);
//	printf("EX07:\nreversed becomes %s\n", str);
//	printf("EX08:\n-123 should also be %d\n", ft_atoi(arr));
//	printf("EX09:\nThese numbers should be in order of size: ");
//	while (i < 6)
//		 printf(" %d ", array[i++]);
//	 printf("\n");
	
	 printf("\n\nIF ALL ARE TRUE, WELL... YOU DA MAN/WOMAN\n\n");
}
