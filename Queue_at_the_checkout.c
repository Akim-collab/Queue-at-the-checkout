/* Считаем людей неразличимыми */

#include <stdio.h>
#include <math.h>

long long int fact(int n) {
    long long int res;
    if (n <= 1)
        return 1;
    else
        res = n * fact(n - 1);
    return res;
}

int main() {
    float n_1, n_2;
    unsigned long long int amount;
    
    printf("Введите количество людей со 100 рублями: ");
    scanf("%f", &n_1);
    
    printf("Введите количество людей с 50 рублями: ");
    scanf("%f", &n_2);
    
    if (n_1 > n_2) {
        amount = 0;
    } else
        
        amount = roundf(((float)((n_2 - n_1 + 1) / (n_2 + 1))) * (fact(n_1 + n_2) / (fact(n_1) * fact(n_2))));
    
    printf("Количество перестановок людей в очереди: %llu\n", amount);
        
    return 0;
}
