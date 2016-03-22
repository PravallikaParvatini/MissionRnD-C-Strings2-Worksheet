/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0,len=0,j=0;
	char *lastWord,temp;
	lastWord = (char *)malloc(0 * sizeof(char));
	if (str == NULL)
		return NULL;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	while (str[len-1] == ' ')
		len--;
	if (len == 0)
	{
		lastWord = (char *)realloc(lastWord,1*sizeof(char));
		lastWord[0] = '\0';
	}
	else
	{
		while ((len-1) >= 0 && str[len-1] != ' ')
		{
			lastWord = (char *)realloc(lastWord, (j + 1)*sizeof(char));
			lastWord[j] = str[len-1];
			len--;
			j++;
		}
		lastWord[j] = '\0';
		i = 0;
		j--;
		while (i < j)
		{
			temp = lastWord[j];
			lastWord[j] = lastWord[i];
			lastWord[i] = temp;
			i++;
			j--;
		}
	}
	return lastWord;
}
