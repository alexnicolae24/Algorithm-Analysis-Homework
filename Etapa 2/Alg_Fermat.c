#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Alg.h"

/* 
 * Functie pentru ridicarea repetata la patrat
 */
int modulo1(u_int32_t base, int exponent, int mod)
{
    int x = 1;
    int y = base;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            x = (x * y) % mod;
        y = (y * y) % mod;
        exponent = exponent / 2;
    }
    return x % mod;
}

/*
 * Algoritmul Fermat pentru verificarea primalitatii
 */
int Prime(u_int32_t p, int it) {
    int i;
    if (p == 1) {
        return 0;
    }
    for (i = 0; i < it; i++) {
        int a = rand() % (p - 1) + 1;
        if (modulo1(a, p - 1, p) != 1) {
            return 0;
        }
    }
    return 1;
}