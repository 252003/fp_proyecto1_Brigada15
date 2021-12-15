#include"conversiones.h"

int main(){
    int o;
    long n;
    char bin[100], hexa[100], oct[100];
    strcpy(hexa, "");
    strcpy(bin, "");
    strcpy(oct, "");
    do{
        printf("Calculadora de conversiones:");
        printf("\n1.Convertir de binario a decimal.");
        printf("\n2.Convertir de binario a hexadecimal.");
        printf("\n3.Convertir de binario a octal.");
        printf("\n4.Convertir de decimal a bin.");
        printf("\n5.Convertir de decimal a hexadecimal.");
        printf("\n6.Convertir de decimal a octal.");
        printf("\n7.Convertir de hexadecimal a bin.");
        printf("\n8.Convertir de hexadecimal a decimal.");
        printf("\n9.Convertir de octal a bin.");
        printf("\n10.Convertir de octal a decimal.");
        printf("\n11.Salir.");
        printf("\n ¿Que operacion deseas realizar?: ");
        scanf("%d", &o);
        switch (o){
            case 1:
                printf("\nHas seleccionado convertir de numero binario a  numerodecimal");
                printf("\nIngresa tu numero: ");
                scanf("%s", bin);
                conv_bin_dec(bin);
                break;
            case 2:
                printf("\nHas seleccionado convertir de numero binario a  numerohexadecimal.");
                printf("\nIngresa tu numero: ");
                scanf("%s", bin);
                conv_bin_hexa(bin);
                break;
            case 3:
                printf("\nHas seleccionado convertir de numero binario a numero octal.");
                printf("\nIngresa tu numero: ");
                scanf("%s", bin);
                conv_bin_oct(bin);
                break;
            case 4:
                printf("\nHas seleccionado convertir de numero decimal a numero binario.");
                printf("\nIngresa tu numero: ");
                scanf("%ld", &n);
                conv_dec_bin(n);
                break;        
            case 5:
                printf("\nHas seleccionado convertir de numero decimal a numero hexadecimal.");
                printf("\nIngresa tu numero: ");
                scanf("%ld", &n);
                conv_dec_hexa(n);
                break; 
            case 6:
                printf("\nHas seleccionado convertir de numero decimal a numero octal.");
                printf("\nIngresa tu numero: ");
                scanf("%ld", &n);
                conv_dec_oct(n);
                break;
            case 7:
                printf("\nHas seleccionado convertir de numero hexadecimal a numero binario.");
                printf("\nIngresa tu numero: ");
                scanf("%s", hexa);
                conv_hexa_bin(hexa);
                break;
            case 8:
                printf("\nHas seleccionado convertir de  numero hexadecimal a numero decimal.");
                printf("\nIngresa tu numero: ");
                scanf("%s", hexa);
                conv_hexa_dec(hexa);
                break;
            case 9:
                printf("\nHas seleccionado convertir de numero octal a numero binario.");
                printf("\nIngresa tu numero: ");
                scanf("%s", oct);
                conv_oct_bin(oct);
                break;
            case 10:
                printf("\nHas seleccionado convertir de numero octal a numero decimal.");
                printf("\nIngresa tu numero: ");
                scanf("%s", oct);
                conv_oct_dec(oct);
                break;                
            default:
                break;
        }
        printf("\n");
        printf("\n");
    }while(o!=11 && o>0 && o<11);
    return 0;
}
