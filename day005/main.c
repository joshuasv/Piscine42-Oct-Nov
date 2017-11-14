/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:17:05 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 22:42:55 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_putchar(char c);

void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *destino, char *fuente, unsigned int n);
char *ft_strstr(char *str, char *to_find);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char ex00[] = "Primera movida del dia"; 
	int ex01 = -2147483648;
	char ex02[] = "	-483648";
	char ex03[26] = "Abcdefghjkl";
	char ex03b[40];
	char ex04[22] = "Va a aparecer cortado";
	char ex04b[22];
	char ex05[] = "Que tal como vamos";
	char ex05b[] = "om";
	char ex06[] = "ABCDEFG";
	char ex06b[] = "abcdefg";
	char ex07[] = "tres";
	char ex07b[] = "tres";
	char ex08[] = "toDo en [[]dMinuScuLas";
	char ex09[] = "ToDO EN *477 MAYUSculAs";
	char ex10[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char ex11[] = "alfabeto";
	char ex11b[] = "num3r02";
	char ex12[] = "1235234";
	char ex12b[] = "123fer2";
	char ex13[] = "lowercase";
	char ex14[] = "UPPERCASE";
	char ex15[] = "eeee";
	char ex15b[] = "\t\rdddf";
	char ex16[] = "This... ";
	char ex16b[] = "and that too";
	char ex17[] = "This... ";
	char ex17b[] = "and only that too";
	char ex18[] = "como";
	char ex18b[] = "veni";

	ft_putstr(ex00);
	ft_putchar('\n');
	ft_putnbr(ex01);
	printf("\nString: \"%s\" , Int: %i", ex02, ft_atoi(ex02));
	printf("\nOriginal: %s, Copia: %s", ex03, ft_strcpy(ex03b,ex03)); 	
	printf("\nOriginal: %s, Copia: %s", ex04, ft_strncpy(ex04b,ex04, 10));
	printf("\nTodo: %s, Encuentra: %s", ex05, ft_strstr(ex05 ,ex05b)); 
	printf("\nString %s is %i than string %s", ex06, ft_strcmp(ex06, ex06b), ex06b);
	printf("\nString %s is %i than string %s", ex07, ft_strncmp(ex07, ex07b, 4), ex07b);
	printf("\nCAPS LOCK: %s", ft_strupcase(ex08));
	printf("\nCAPS LOCK: %s", ft_strlowcase(ex09));
	printf("\nCapitalize: %s", ft_strcapitalize(ex10));
	printf("\nAlpha: %s, Numb3rs: %s || %i, %i", ex11, ex11b, ft_str_is_alpha(ex11), ft_str_is_alpha(ex11b));
	printf("\nNumbers: %s, 41ph4: %s || %i, %i", ex12, ex12b, ft_str_is_numeric(ex12), ft_str_is_numeric(ex12b));
	printf("\nIt's only lowercase: %i", ft_str_is_lowercase(ex13));
	printf("\nIt's only uppercase: %i", ft_str_is_uppercase(ex14));
	printf("\nIt's printable: %i It's not pribtable: %i", ft_str_is_printable(ex15), ft_str_is_printable(ex15b));
	printf("\n%s", ft_strcat(ex16b, ex16));
	printf("\n%s", ft_strncat(ex17b, ex17, 11));
	printf("\n%i", ft_strlcat(ex18b, ex18, 6));
	return 0;
}
