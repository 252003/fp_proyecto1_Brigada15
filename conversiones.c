#include "conversiones.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Convierte de numeros binarios a numeros decimales 
 * 
 * Esta es una cadena que va a convertir numeros binarios a numeros decimales 
 */
int conv_binario_decimal(char *binario)
{
    int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }
    return num;
}

/**
 * @brief Convierte de numeros decimales a numeros binarios 
 * 
 * Esta es una cadena que va a convertir numeros decimales a numeros binarios 
 */
char *conv_decimal_binario(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *binario=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(temp, "1");
        else strcat(temp, "0");        
    }while(num!=1 && num!=0);
    
    if(num== 1) strcat(temp, "1");
    //return binario; Ya no es necesario el return

    binario = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        binario[j] = temp[i];
        //
    }
    free(temp);
    temp = NULL;
    return binario;
}

/**
 * @brief Convierte de numeros hexadecimales a numeros decimales 
 * 
 * Esta es una cadena que va a convertir numeros hexadecimales a numeros decimales 
 */
int conv_hexa_decimal(char *hex)
{
    int num = 0, pot = 0;
    for(int i = strlen(hex)-1; i>=0; i--){
        switch(hex[i]){
            case '1':
                num += pow(16, pot);
                break;
            case '2':
                num += 2*pow(16, pot);
                break;
            case '3':
                num += 3*pow(16, pot);
                break;
            case '4':
                num += 4*pow(16, pot);
                break;
            case '5':
                num += 5*pow(16, pot);
                break;
            case '6':
                num += 6*pow(16, pot);
                break;
            case '7':
                num += 7*pow(16, pot);
                break;
            case '8':
                num += 8*pow(16, pot);
                break;
            case '9':
                num += 9*pow(16, pot);
                break;
            case 'A': 
            case 'a':
                num += 10*pow(16, pot);
                break;
            case 'B': 
            case 'b':
                num += 11*pow(16, pot);
                break;
            case 'C': 
            case 'c':
                num += 12*pow(16, pot);
                break;
            case 'D': 
            case 'd':
                num += 13*pow(16, pot);
                break;
            case 'E': 
            case 'e':
                num += 14*pow(16, pot);
                break;
            case 'F': 
            case 'f':
                num += 15*pow(16, pot);
                break;
        }        
        pot = pot + 1;
    }
    return num;
}

/**
 * @brief Convierte de numeros decimales a numeros hexadecimales 
 * 
 * Esta es una cadena que va a convertir numeros decimales a numeros hexadecimales 
 */
char *conv_decimal_hexa(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *hex=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 16;        
        num = (int)(num/16);
        switch(t){
            case 0:
                strcat(temp, "0");
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2"); 
                break;
            case 3:
                strcat(temp, "3"); 
                break;
            case 4:
                strcat(temp, "4"); 
                break;
            case 5:
                strcat(temp, "5"); 
                break;
            case 6:
                strcat(temp, "6"); 
                break;
            case 7:
                strcat(temp, "7"); 
                break;
            case 8:
                strcat(temp, "8"); 
                break;
            case 9:
                strcat(temp, "9"); 
                break;
            case 10:             
                strcat(temp, "10"); 
                break;
            case 11:             
                strcat(temp, "11"); 
                break;
            case 12:
                strcat(temp, "12"); 
                break;
            case 13:
                strcat(temp, "13"); 
                break;
            case 14: 
                strcat(temp, "14"); 
                break;
            case 15: 
                strcat(temp, "F");
                break;
        }        
    }while(num>0);
    
    hex = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        hex[j] = temp[i];    
    }
    free(temp);
    temp = NULL;
    return hex;
}

/**
 * @brief Convierte de numeros otales a numeros decimales 
 * 
 * Esta es una cadena que va a convertir numeros octales a numeros decimales 
 */
int conv_octal_decimal(char *octal)
{
    int num = 0, pot = 0;
    for(int i = strlen(octal)-1; i>=0; i--){
        switch(octal[i]){
            case '1':
                num += pow(8, pot);
                break;
            case '2':
                num += 2*pow(8, pot);
                break;
            case '3':
                num += 3*pow(8, pot);
                break;
            case '4':
                num += 4*pow(8, pot);
                break;
            case '5':
                num += 5*pow(8, pot);
                break;
            case '6':
                num += 6*pow(8, pot);
                break;
            case '7':
                num += 7*pow(8, pot);
                break;
            
        }        
        pot = pot + 1;
    }
    return num;
}

/**
 * @brief Convierte de numeros decimales a numeros octales 
 * 
 * Esta es una cadena que va a convertir numeros decimales a numeros octales 
 */
char *conv_decimal_octal(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *octal=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 16;        
        num = (int)(num/16);
        switch(t){
            case 0:
                strcat(temp, "0");
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2"); 
                break;
            case 3:
                strcat(temp, "3"); 
                break;
            case 4:
                strcat(temp, "4"); 
                break;
            case 5:
                strcat(temp, "5"); 
                break;
            case 6:
                strcat(temp, "6"); 
                break;
            case 7:
                strcat(temp, "7"); 
                break;
            
        }        
    }while(num>0);
    
    octal = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        octal[j] = temp[i];
    }
    free(temp);
    temp = NULL;
    return octal;
}

/**
 * @brief Conversion de numeros hexadecimales a numeros binarios
 * 
 * Esta es una cadena que va a convertir numeros hexadecimales a numeros binarios
 */
void conv_hexa_bin(char hexa[]){
    int b=0, size=0;
    char *bin=NULL;
    size=strlen(hexa);
    bin=(char *)malloc(sizeof(char*));
    strcpy(bin, "");    
    for (b = 0; b < size; b++)
    {
        switch(hexa[b]){
            case '0':
                strcat(bin, "0000");
                break;    
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;        
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'A': case 'a':
                strcat(bin, "1010");
                break;
            case 'B': case 'b':
                strcat(bin, "1011");
                break;
            case 'C': case 'c':
                strcat(bin, "1100");
                break;
            case 'D': case 'd':
                strcat(bin, "1101");
                break;
            case 'E': case 'e':
                strcat(bin, "1110");
                break;
            case 'F': case 'f':
                strcat(bin, "1111");
                break;
        }
    }
    printf("\nEl numero convertido en binario es: %s", bin);
    printf("\n");
    free(bin);
    bin=NULL;    
}

/**
 * @brief Convierte de numeros binarios a numeros hexadecimales 
 * 
 * Esta es una cadena que va a convertir numeros binarios a numeros hexadecimales
 */
void conv_bin_hexa(char binario[]){
    int n=0, pot=0, t=0;
    char *hexa=NULL;
    hexa=(char *)malloc(sizeof(char*));
    strcpy(hexa, "");
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1'){
            n= n+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            t=n % 16;
            n=(int)(n/16);
            switch (t){
                case 0:
                    strcat(hexa, "0");
                    break;
                case 1:
                    strcat(hexa, "1");
                    break;  
                case 2:
                    strcat(hexa, "2");
                    break;
                case 3:
                    strcat(hexa, "3");
                    break; 
                case 4:
                    strcat(hexa, "4");
                    break; 
                case 5:
                    strcat(hexa, "5");
                    break;
                case 6:
                    strcat(hexa, "6");
                    break;
                case 7:
                    strcat(hexa, "7");
                    break;
                case 8:
                    strcat(hexa, "8");
                    break;
                case 9:
                    strcat(hexa, "9");
                    break;
                case 10:
                    strcat(hexa, "A");
                    break;
                case 11:
                    strcat(hexa, "B");
                    break;
                case 12:
                    strcat(hexa, "C");
                    break;
                case 13:
                    strcat(hexa, "D");
                    break;
                case 14:
                    strcat(hexa, "E");
                    break;  
                case 15:
                    strcat(hexa, "F");
                    break;      
                }
            } while (n != 0);
        printf("\n");
        printf("El numero en hexadecimal convertido es: ");
        reverse(hexa);
        printf("\n");
        free(hexa);
        hexa=NULL;
}

/**
 * @brief Convierte de numeros binarios a numeros octales 
 * 
 * Esta es una cadena que va a convertir numeros binarios a numeros octales 
 */
void conv_bin_oct(char binario[]){
    int n=0, pot=0, a=0;
    char *oct=NULL;
    oct=(char *)malloc(sizeof(char*));
    strcpy(oct, "");
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1'){
            n= n+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            a=n%8;
            n=(int)(n/8);
            switch (a){
                case 0:
                    strcat(oct, "0");
                    break;
                case 1:
                    strcat(oct, "1");
                    break;
                case 2:
                    strcat(oct, "2");
                    break;
                case 3:
                    strcat(oct, "3");
                    break;
                case 4:
                    strcat(oct, "4");
                    break;       
                case 5:
                    strcat(oct, "5");
                    break;
                case 6:
                    strcat(oct, "6");
                    break;
                case 7:
                    strcat(oct, "7");
                    break;                                                                                      
                default:
                    printf("Incorrecto.");
                    break;
            }    
            }while (n!=0);
        printf("\n");
        
        printf("El numero en octal convertido es: ");
        reverse(oct);    
        printf("\n");
        free(oct);
        oct=NULL;
} 
/**
 * @brief Convierte de numeros octales a numeros binarios 
 * 
 * Esta es una cadena que va a convertir numeros octales a numeros binarios 
 */
void conv_oct_bin(char oct[]){
    int c=0, size=0, x=0;
    char *bin=NULL;
    size=strlen(oct);
    bin=(char*)malloc(sizeof(char*));
    strcpy(bin, ""); 
    for (c=0; c<size; c++){ 
        switch (oct[c]){ 
            case '0':
                strcat(bin, "000");
                break;
            case '1':
                strcat(bin, "001");
                break;
            case '2':
                strcat(bin, "010");
                break;
            case '3':
                strcat(bin, "011");
                break;
            case '4':
                strcat(bin, "100");
                break;        
            case '5':
                strcat(bin, "101");
                break;    
            case '6':
                strcat(bin, "110");    
                break;
            case '7':
                strcat(bin, "111");
                break;
            default:
                x+=5;
                break;     
            }
    }
    if (x!=0){
        printf("Numero no valido");
        printf("\n");
    }
    else{
    printf("\nEl numero convertido en binario es: %s", bin);
    printf("\n");
    }
    free(bin);
    bin=NULL;
}
