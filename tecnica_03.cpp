#include <stdio.h>
#define DIAS_DO_MES 30

int main() {
    float faturamento[DIAS_DO_MES] = {220.5, 305.6, 100.2, 450.3, 520.4, 210.6, 300.2, 
                                      340.9, 0.0, 180.7, 200.5, 600.1, 290.3, 410.8, 
                                      0.0, 320.5, 0.0, 310.0, 380.1, 260.4, 470.6, 
                                      400.2, 0.0, 330.5, 500.7, 410.0, 270.4, 0.0, 
                                      380.8, 310.3};
    
    float menor_faturamento = -1, maior_faturamento = -1, soma = 0.0, media = 0.0;
    int dias_com_faturamento = 0, dias_acima_da_media = 0;

    for (int i = 0; i < DIAS_DO_MES; i++) {
        if (faturamento[i] > 0.0) {
            if (menor_faturamento == -1 || faturamento[i] < menor_faturamento) {
                menor_faturamento = faturamento[i];
            }
            if (faturamento[i] > maior_faturamento) {
                maior_faturamento = faturamento[i];
            }
            soma += faturamento[i];
            dias_com_faturamento++;
        }
    }

    if (dias_com_faturamento > 0) {
        media = soma / dias_com_faturamento;
    }

    for (int i = 0; i < DIAS_DO_MES; i++) {
        if (faturamento[i] > media) {
            dias_acima_da_media++;
        }
    }

    printf("Menor valor de faturamento: %.2f\n", menor_faturamento);
    printf("Maior valor de faturamento: %.2f\n", maior_faturamento);
    printf("Numero de dias com faturamento acima da media: %d\n", dias_acima_da_media);

    return 0;
}

