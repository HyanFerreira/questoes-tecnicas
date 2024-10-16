#include <stdio.h>

int main() {
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    double total_faturamento = sp + rj + mg + es + outros;

    double percentual_sp = (sp / total_faturamento) * 100;
    double percentual_rj = (rj / total_faturamento) * 100;
    double percentual_mg = (mg / total_faturamento) * 100;
    double percentual_es = (es / total_faturamento) * 100;
    double percentual_outros = (outros / total_faturamento) * 100;

    printf("Faturamento total: R$ %.2f\n\n", total_faturamento);
    printf("Percentual de faturamento por estado:\n");
    printf("SP: %.2f%%\n", percentual_sp);
    printf("RJ: %.2f%%\n", percentual_rj);
    printf("MG: %.2f%%\n", percentual_mg);
    printf("ES: %.2f%%\n", percentual_es);
    printf("Outros: %.2f%%\n", percentual_outros);

    return 0;
}

