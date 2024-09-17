#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    // Jika n kurang dari 2, otomatis bukan bilangan prima
    if (n < 2) {
        printf("BUKAN\n");
        return 0;
    }
    
    // Cek apakah n habis dibagi oleh bilangan dari 2 hingga akar kuadrat n
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("BUKAN\n");
            return 0;
        }
    }
    
    // Jika tidak ditemukan pembagi, maka n adalah bilangan prima
    printf("PRIMA\n");
    return 0;
}
