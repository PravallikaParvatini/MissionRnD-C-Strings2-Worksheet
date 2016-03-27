/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int len_word = 0, i = 0,j=0, count = 0, final_count = 0;
	while (word[i] != '\0')
	{
		len_word++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == word[j])
		{
			i++;
			j++;
			count++;
			while (str[i] == word[j]&&word[j]!='\0')
			{
				count++;
				i++;
				j++;
			}
		}
		else
			i++;
		if (count == len_word)
		{
			i = i - len_word + 1;
			count = 0;
			final_count++;
		}
	}
	return final_count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

