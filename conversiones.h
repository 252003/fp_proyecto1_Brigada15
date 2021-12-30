#ifndef __CONVERSIONES_H__
#define __CONVERSIONES_H__
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


void conv_dec_bin(int n);  
void conv_bin_dec(char bin[]); 

void conv_dec_oct(int n);  
void conv_oct_dec(char oct[]);

void conv_dec_hexa(int n); 
void conv_hexa_dec(char hexa[]); 


void conv_bin_oct(char bin[]); 
void conv_oct_bin(char oct[]); 

void conv_bin_hexa(char bin[]); 
void conv_hexa_bin(char hexa[]); 

#endif 
