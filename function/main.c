/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:28:00 by moouahab          #+#    #+#             */
/*   Updated: 2023/10/21 22:28:00 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void free_split(char **split) 
{
    for (int i = 0; split[i] != NULL; i++) {
        free(split[i]);
    }
    free(split);
}

int main() {
    const char *input_string = "Hello-World-This----Is---A--Test";
    char delimiter = '-';

    char **result = ft_split(input_string, delimiter);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Substring %d: %s\n", i, result[i]);
        }
        free_split(result);
    } else {
        printf("L'allocation mémoire a échoué.\n");
    }

    return 0;
}


