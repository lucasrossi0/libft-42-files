#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(void)
{
	/*
	char	*s = "lucasrossiemmamccoy";
	char test[10] = "lucasrossi";
	const char *p = "teste";
	const char *p2 = "testee";
	size_t size = 6;
	int	c = '4';
	int	d = 'd';
	int	e = 'e';
	int	n = 40;
	int	a = 'i';
	int	i = 'i';
	const char	*big = "lucasrossiemma";
	const char	*little = "em";
	//const char	*src = "lucasrossiemma";
	//char	*dst = "teste";
	size_t len = 20;
	//char *res = ft_memset(test, '=', sizeof(test));

	printf("Variable c = %c. Isalpha: %d. Isdigit: %d.Isalnum: %d. Isascii: %d. Isprint: %d\n", c, ft_isalpha(c), ft_isdigit(c), ft_isalnum(c), ft_isascii(c), ft_isprint(c));
	printf("Length: %d\n", ft_strlen(s));
	printf("Antes: %c. Depois: %c\n", d, ft_toupper(d));
	printf("Antes: %c. Depois: %c\n", e, ft_tolower(e));
	printf("Usando livraria: %s\n", (char *) memchr(s, a, n));
	printf("Onde ocorre: %c. Na string %s\n", a, (char*)ft_memchr(s, a, n));
	printf("Antes do memset %s\n", test);	
	printf("TESTANDO O PIRUZAO %s\n", (char *) ft_memset(test+5, '-', 5));
	printf("Depois do memset %s\n", test);
	
	printf("Onde ocorre a letra %c => %s\n", e, ft_strchr(p, e));
	printf("STRING LIBRARY Ultima ocorrencia da letra %c => %s\n", i, strrchr(p, e));
	printf("Ultima ocorrencia da letra %c => %s\n", i, ft_strrchr(p, e));
	printf("Resultado da comparacao %d\n", ft_strncmp(p, p2, size));
	printf("STRING LIBRARYResultado da comparacao %d\n", strncmp(p, p2, size));
//	printf("Testing STRNSTR %s\n", strnstr(big, little, len));
	printf("Testing STRNSTR %s\n", ft_strnstr(big, little, len));
//	printf("Testing STRLCPY %zu\n", ft_strlcpy(dst, src, sizeof(dst)));
//	printf("Testing STRLCPY %zu\n", strlcpy(dst, src, sizeof(dst)));
//	printf("tamanho do sizeof src %zu e dst %zu\n", sizeof(src), sizeof(dst));
//	printf("Testando as duas strings src: %s e dst: %s\n", src, dst);
	const char *teste1 = "aaaa";
	const char *teste3 = "zzzz";
	const void *mem1 = &teste1;
	const void *mem2 = &teste3;
	char teste2[10] = "Hello";
	char memdst[10];
	void *dest1 = &memdst;
	//const char memsrc[10] = "Lucas";
	printf("Testing STRLCAT %zu\n", ft_strlcat(teste2, teste1, 10));
	printf("Teste1 %s\nTeste2 %s\n", teste1, teste2);
	//memcpy(memdst, memsrc, 10);
	//printf("Using memcpy: %s\n", memdst);
	printf("Diferenca ft %d\n", ft_memcmp(mem1, mem2, 20));
	printf("Diferenca mm %d\n", memcmp(mem1, mem2, 20));
	//ft_memmove(dest1, mem1, sizeof(mem1));
	memmove(dest1, mem1, sizeof(mem1));
	printf("Dest = %s\n", (char *)dest1);
	char	*flamengo = "flamengo";
	printf("Antes do BZERO %s\n", flamengo);
	//ft_bzero(flamengo, 2);
	//printf("Depois do BZERO %s\n", flamengo);
	char *numero = "	-2907";
	printf("Depois do ATOI %d\n", ft_atoi(numero));
	char *dup = "lucas";
	char *resdup = ft_strdup(dup);
	printf("String original %s\n", dup);
	printf("String duplicate %s\n", resdup);
	size_t nmemb = 5;
	size_t sizec = 4;
	char *cal = (char *) ft_calloc(nmemb, sizec);
	printf("Testando calloc %s\n", cal);
	const char *s1 = "lucas";
	const char *s2 = "rossi";
	printf("Resultado %s\n", ft_strjoin(s1,s2));
	const char *boca = "daleboca";
	unsigned int start = 4;
	char *sub = ft_substr(boca, start, 4);
	printf("Testando o substring %s\n", sub);
	const char *emma = "xrxemmalonsorxx";
	const char *set = "xr";
	char *FLAMENGO = ft_strtrim(emma, set);
	printf("FLAMENGO %s\n", FLAMENGO);
	const char *s1teste = "sssszzsHello Worldzzzzzzzss";
    const char *setteste = "zs";
    char *trimmed_str = ft_strtrim(s1teste, setteste);
    printf("Trimmed string: '%s'\n", trimmed_str);
    free(trimmed_str);
	//char const *splitS = "lucas|rossi";
	//char splitD = '|';
	//char **splitR = ft_split(splitS, splitD);
	//int jef = 0;
	//while (splitR[jef] != NULL)
    //{
    //    printf("Element %s\n", splitR[jef]);
    //    jef++;
    //}
	*/
	int itoa = -42;
	printf("Itoa %s\n", ft_itoa(itoa));
	return (0);
}
