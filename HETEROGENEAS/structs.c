/*Crie um registro para dados de um veiuculo*/
#include <stdio.h>
#include <stdlib.h>

typedef struct carro
{
    char placa[10];
    char chassi[32];
    char fabricante[16];
    char modelo[16];
    int ano;
    float preco;
} Carro;

int main()
{
    Carro car;

    printf("Placa: ");
    scanf("%s", car.placa);
    printf("Chassi: ");
    scanf("%s", car.chassi);
    printf("Fabricante: ");
    scanf("%s", car.fabricante);
    printf("Modelo: ");
    scanf("%s", car.modelo);
    printf("Ano: ");
    scanf("%d", &car.ano);
    printf("Preco: ");
    scanf("%f", &car.preco);

    printf("\nPlaca: %s\n", car.placa);
    printf("Chassi: %s\n", car.chassi);
    printf("Fabricante: %s\n", car.fabricante);
    printf("Modelo: %s\n", car.modelo);
    printf("Ano: %d\n", car.ano);
    printf("Preco: %.2f\n", car.preco);

    return 0;
}