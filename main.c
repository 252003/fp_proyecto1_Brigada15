#include"conversiones.h"

int main(){
    int f;
    long n;
    char binario[100], hexa[100], oct[100];
    strcpy(hexa, "");
    strcpy(binario, "");
    strcpy(oct, "");
    do{
        printf("Bienvenidos a la calculadora de converision numerica:");
        printf("\n1.Convertir de numero binario a numero decimal.");
        printf("\n2.Convertir de numero binario a numero hexadecimal.");
        printf("\n3.Convertir de numero binario a numero octal.");
        printf("\n4.Convertir de numero decimal a numero binario.");
        printf("\n5.Convertir de numero decimal a numero hexadecimal.");
        printf("\n6.Convertir de numero decimal a numero octal.");
        printf("\n7.Convertir de numero hexadecimal a numero binario.");
        printf("\n8.Convertir de numero hexadecimal a numero decimal.");
        printf("\n9.Convertir de numero octal a numero binario.");
        printf("\n10.Convertir de numero octal a numero decimal.");
        printf("\n11.Salir.");
        printf("\n ¿Que conversion deseas?\n ");
        scanf("%d", &f);
        switch (f){
            case 1:
                printf("\nSeleccionaste convertir de numero binario a numero decimal");
                printf("\nIngresa un numero: ");
                scanf("%s", binario);
                conv_bin_decimal(binario);
                break;
            case 2:
                printf("\nSeleccionaste convertir de numero binario a numero hexadecimal.");
                printf("\nIngresa un numero: ");
                scanf("%s", binario);
                conv_bin_hexa(binario);
                break;
            case 3:
                printf("\nSeleccionaste convertir de numero binario a numero octal.");
                printf("\nIngresa un numero: ");
                scanf("%s", binario);
                conv_bin_oct(binario);
                break;
            case 4:
                printf("\nSeleccionaste convertir de numero decimal a numero binario.");
                printf("\nIngresa un numero: ");
                scanf("%ld", &n);
                conv_dec_bin(n);
                break;        
            case 5:
                printf("\nSeleccionaste convertir de numero decimal a numero hexadecimal.");
                printf("\nIngresa un numero: ");
                scanf("%ld", &n);
                conv_dec_hexa(n);
                break; 
            case 6:
                printf("\nSeleccionaste convertir de numero decimal a numero octal.");
                printf("\nIngresa un numero: ");
                scanf("%ld", &n);
                conv_dec_oct(n);
                break;
            case 7:
                printf("\nSeleccionaste convertir de numero hexadecimal a numero binario.");
                printf("\nIngresa un numero  : ");
                scanf("%s", hexa);
                conv_hexa_bin(hexa);
                break;
            case 8:
                printf("\nSeleccionaste convertir de numero hexadecimal a numero decimal.");
                printf("\nIngresa un numero: ");
                scanf("%s", hexa);
                conv_hexa_dec(hexa);
                break;
            case 9:
                printf("\nSeleccionaste convertir de numero octal a numero binario.");
                printf("\nIngresa un numero: ");
                scanf("%s", oct);
                conv_oct_bin(oct);
                break;
            case 10:
                printf("\nSeleccionaste convertir de numero octal a numero decimal.");
                printf("\nIngresa un numero: ");
                scanf("%s", oct);
                conv_oct_dec(oct);
                break;                
            default:
                break;
        }
        printf("\n");
        printf("\n");
    }while(f!=11 && f>0 && f<11);
    return 0;
}
