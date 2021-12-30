#include"conversiones.h"

/**
 * @brief Conversion de decimal a binario
 * 
 * @param n es el numero a convertir en binario
 */
void conv_dec_bin(int n){
    int t=0;
    char *bin=NULL; 
    bin=(char*)malloc(sizeof(char*));
    strcpy(bin, "");
    do{
        t=n%2;
        n=(int)(n/2);
        if(t==1) {
            strcat(bin, "1");
        }
        else{ 
            strcat(bin, "0"); 
        }    
        }while(n!=0);
    printf("Tu numero en binario es: ");
    reverse(bin);
    printf("\n");
    free(bin);
    bin=NULL;
}

/**
 * @brief Convierte de binario a decimal
 * 
 * @param binario es la cadena a convertir
 */
void conv_bin_dec(char bin[]){
    int num=0, pot=0;
    for (int i=strlen(bin)-1; i>=0; i--){
        if (bin[i]== '1')
            num= num+pow(2, pot);
        pot=pot+1;            
    }    
    printf("El numero decimal es de: %d ", num);
    printf("\n");
}

/**
 * @brief Conversion de decimal a octal
 * 
 * @param n es el decimal a convertir
 */
void conv_dec_oct(int n){
    int r=0;
    char *oct=NULL;
    oct=(char*)malloc(sizeof(char*));
    strcpy(oct,"");
    do{
        r=n%8;
        n=(int)(n/8);
        switch (r)
        {
        case 0:
            strcat(oct,"0");
            break;
        case 1:
            strcat(oct,"1");
            break;
        case 2:
            strcat(oct,"2");
            break;
        case 3:
            strcat(oct,"3");
            break;
        case 4:
            strcat(oct,"4");
            break;       
        case 5:
            strcat(oct,"5");
            break;
        case 6:
            strcat(oct,"6");
            break;
        case 7:
            strcat(oct,"7");
            break;              
        }
    }while (n!=0); 
    printf("\n");
    printf("El numero en octal es: ");
    reverse(oct);
    printf("\n");
    free(oct);
    oct=NULL;
}

/**
 * @brief Conversion de octal a decimal
 * 
 * @param oct es la cadena a conertir
 */
void conv_oct_dec(char oct[]){
    long dec=0, i=0, def=0;
    reverse_change(oct);
    while(oct[i]!='\0'){ 
        switch(oct[i]){
            case '0':
                i++;
                break;
            case '1':
                dec+=1*pow(8,i);
                i++;
                break;
            case '2':
                dec+=2*pow(8,i);
                i++;
                break;
            case '3':
                dec+=3*pow(8,i);
                i++;
                break;
            case '4':
                dec+=4*pow(8,i);  
                i++;
                break;
            case '5':
                dec+=5*pow(8,i);
                i++;
                break;
            case '6':
                dec+=6*pow(8,i);
                i++;
                break;
            case '7':
                dec+=7*pow(8,i);
                i++;
                break;   
            }
        }
    printf("El numero decimal es de: %lld",dec);
    printf("\n");	
}

/**
 * @brief Conversion de decimal a hexadecimal
 * 
 * @param n es el numero a convertir
 */
void conv_dec_hexa(int n){
    int t=0;
    char *hexa=NULL;
    hexa=(char*)malloc(sizeof(char*));
    strcpy(hexa,"");
    do
    {
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
    } while (n!=0);
    printf("\n");
    printf("El numero en hexadecimal equivale a: ");
    reverse(hexa);
    printf("\n");
    free(hexa);
    hexa=NULL;
}

/**
 * @brief Conversion de hexadecimal a decimal 
 * 
 * @param hexa es la cadena a convertir
 */
void conv_hexa_dec(char hexa[]){
    long long n=0;
    int i=0,j;
    for(j=strlen(hexa)-1;j>=0;j--){ 
    switch(hexa[j]){
        case '0':
			i++;
            break;
		case '1':
			n+=1*pow(16,i);
			i++;
            break;
		case '2':
			n+=2*pow(16,i);
			i++;
            break;
		case '3':
			n+=3*pow(16,i);
			i++;
            break;
		case '4':
			n+=4*pow(16,i);  
			i++;
            break;
		case '5':
			n+=5*pow(16,i);
			i++;
            break;
		case '6':
			n+=6*pow(16,i);
			i++;
            break;
		case '7':
			n+=7*pow(16,i);
			i++;
            break;
		case '8':
			n+=8*pow(16,i);
			i++;
            break;
		case '9':
			n+=9*pow(16,i);
			i++;
            break;
		case 'A': case 'a':
			n+=10*pow(16,i);
			i++;
            break;
		case 'B': case 'b':
			n+=11*pow(16,i);
			i++;
            break;
		case 'C': case 'c':
			n+=12*pow(16,i);
			i++;
            break;
		case 'D': case 'd':
			n+=13*pow(16,i);
			i++;
            break;
		case 'E': case'e':
			n+=14*pow(16,i);
			i++;
            break;
		case 'F': case 'f':
			n+=15*pow(16,i);
			i++;
            break;
        }
    }
    printf("El numero decimal es de: %lld",n);
    printf("\n");
}

/**
 * @brief Conversion de binario a octal que es otra cadena
 * 
 * @param binario es la cadena a convertir
 */
void conv_bin_oct(char bin[]){
    int n=0, pot=0, r=0;
    char *oct=NULL;
    oct=(char *)malloc(sizeof(char*));
    strcpy(oct, "");
    for (int i=strlen(bin)-1; i>=0; i--){
        if (bin[i]== '1'){
            n= n+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            r=n%8;
            n=(int)(n/8);
            switch (r){
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
        
        printf("El numero en octal es: ");
        reverse(oct);    
        printf("\n");
        free(oct);
        oct=NULL;
} 

/**
 * @brief Conversion de octal a binario
 * 
 * @param oct es la cadena a convertir
 */
void conv_oct_bin(char oct[]){
    int b=0, size=0, def=0;
    char *bin=NULL;
    size=strlen(oct);
    bin=(char*)malloc(sizeof(char*));
    strcpy(bin, ""); 
    for (b=0; b<size; b++){ 
        switch (oct[b]){ 
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
                def+=5;
                break;     
            }
    }
    if (def!=0){
        printf("Numero octal no valido");
        printf("\n");
    }
    else{
    printf("\nEl numero en binario equivale a: %s", bin);
    printf("\n");
    }
    free(bin);
    bin=NULL;
}


/**
 * @brief Convierte de binario a hexadecimal 
 * 
 * @param binario es la cadena a convertir en otra cadena llamada hexadecimal
 */
void conv_bin_hexa(char bin[]){
    int num=0, pot=0, t=0;
    char *hexa=NULL;
    hexa=(char *)malloc(sizeof(char*));
    strcpy(hexa, "");
    for (int i=strlen(bin)-1; i>=0; i--){
        if (bin[i]== '1'){
            num= num+pow(2, pot);
        }
        pot=pot+1;            
        }
        do{
            t=num % 16;
            num=(int)(num/16);
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
            } while (num!= 0);
        printf("\n");
        printf("El numero en hexadecimal equivale a: ");
        reverse(hexa);
        printf("\n");
        free(hexa);
        hexa=NULL;
}

/**
 * @brief Conversion de hexadecimal a binario
 * 
 * @param hexa es la cadena que se desea convertir
 */
void conv_hexa_bin(char hexa[]){
    int x=0, size=0;
    char *bin=NULL;
    size=strlen(hexa);
    bin=(char *)malloc(sizeof(char*));
    strcpy(bin, "");    
    for (x=0; x<size; x++)
    {
        switch(hexa[x]){
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
    printf("\nEl numero en binario equivale a: %s", bin);
    printf("\n");
    free(bin);
    bin=NULL;    
}

