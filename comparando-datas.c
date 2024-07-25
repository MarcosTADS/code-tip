#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int comparar_datas(struct Data data1, struct Data data2)
{
    if (data1.ano != data2.ano) {
        return (data1.ano < data2.ano) ? 1 : -1;
    }
    
    if (data1.mes != data2.mes) {
        return (data1.mes < data2.mes) ? 1 : -1;
    }
    
    if (data1.dia != data2.dia) {
        return (data1.dia < data2.dia) ? 1 : -1;
    }
    
    return 0; // As datas são iguais
}

int main() {
    struct Data data1 = {10, 7, 2024};
    struct Data data2 = {15, 7, 2024};

    int resultado = comparar_datas(data1, data2);
    if (resultado == 0) {
        printf("As datas são iguais\n");
    } else if (resultado == 1) {
        printf("Data1 é anterior a Data2\n");
    } else {
        printf("Data1 é posterior a Data2\n");
    }

    return 0;
}