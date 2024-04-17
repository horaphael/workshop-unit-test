/*
** EPITECH PROJECT, 2023
** PAGYOZ' Clib. Check it out at : https://github.com/PAGY0Z/my_lib_c
** File description:
** my_free
*/

#include "my.h"

////////////////////////////////////////////////////////////////////////////////
/// \file my_free.c
/// \brief Contains the my_free function.
/// \author PAGY0Z
/// \version 1.0
/// \date 2023-27-05
////////////////////////////////////////////////////////////////////////////////

void my_free(void *ptr);

////////////////////////////////////////////////////////////////////////////////
/// \brief Frees a pointer.
/// \param ptr The pointer to free.
/// \note This function is a wrapper for the free function.
////////////////////////////////////////////////////////////////////////////////
void my_free(void *ptr)
{
    if (ptr) free(ptr);
}