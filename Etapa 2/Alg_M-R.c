#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Alg.h"

/* 
 * Functie care calculeaza (a * b) % c,luand in considerare faptul ca a * b se poate supraincarca
 */
int mulmod(int a, int b, int mod)
{
    int x = 0,y = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
        {    
            x = (x + y) % mod;
        }
        y = (y * 2) % mod;
        b /= 2;
    }
    return x % mod;
}

/* 
 * Functie pentru ridicarea repetata la patrat
 */
int modulo2(u_int32_t base, int exponent, int mod)
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
 * Algoritmul pentru testrea primalitatii Miller-Rabin, iteratia reprezinta acuratetea algoritmilor
 */
int Prime(u_int32_t p,int it)
{
    int i;
    int s;
    if (p < 2)
    {
        return 0;
    }
    if (p != 2 && p % 2==0)
    {
        return 0;
    }

    s = p - 1;
    
    while (s % 2 == 0)
    {
        s /= 2;
    }
    for (i = 0; i < it; i++)
    {
        int a = rand() % (p - 1) + 1, temp = s;
        int mod = modulo2(a, temp, p);
        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if (mod != p - 1 && temp % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}