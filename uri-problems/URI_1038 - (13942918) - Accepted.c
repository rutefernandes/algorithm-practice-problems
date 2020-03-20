#include <stdio.h>
 
int main() {
 
	int id, qtd;
    double total, valores[5] = {4.0, 4.50, 5.0, 2.0, 1.50};
	scanf("%d %d", &id, &qtd);
    total = valores[id-1] * qtd;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}