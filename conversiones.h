#ifndef __CONVERSIONES_H__
#define __CONVERSIONES_H__
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void conv_dec_bin(int num);
void conv_bin_decimal(char binario[]);

void conv_dec_oct(int num);
void conv_oct_dec(char oct[]);

void conv_dec_hexa(int num);
void conv_hexa_dec(char hexa[]); 


void conv_bin_oct(char binario[]); 
void conv_oct_bin(char oct[]);

void conv_bin_hexa(char binario[]);
void conv_hexa_bin(char hexa[]);

#endif 
