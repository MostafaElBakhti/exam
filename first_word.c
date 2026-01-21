/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:48:26 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/01/21 18:36:32 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *first_word(char *str)
{
	char *tmp = str ; 
	int str_len = 0 ; 
	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		str_len++;
		str++;
	}

	char *res = malloc(str_len + 1);

	int i = 0 ; 
	while (i < str_len)
	{
		res[i] = tmp[i];
		i++ ; 
	}
	res[i] = '\0';

		return res;
}

int main(){
	char str[] = "heello" ; 
	char *test = first_word(str) ; 
	printf("%s", test);
}
