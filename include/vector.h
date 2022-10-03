/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmabel <jmabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:29 by jmabel            #+#    #+#             */
/*   Updated: 2022/10/03 17:04:32 by jmabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "minirt.h"

typedef struct s_coord	t_coord;

/*  vector_create.c
	Create a new vector, matrices */
t_coord	*new_vector(float x, float y, float z);
t_coord	*new_vector_by_two_points(t_coord *a, t_coord *b);

/*  vector_length_normalizing.c
	Calculate vector length and normalizing vector */
float	vector_length(t_coord *vector);
float	vector_length_by_two_points(t_coord *a, t_coord *b);

/*  print_vector.h
	Print to stdout vectors and matrices */
void	print_vector(char *name, t_coord *vector);

/*  vector_linear_operations.c 
	Scalar multiplication*/
void	scalar_multiplication(t_coord *vector, float alpha);

#endif
