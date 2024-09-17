#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int array[n];
    
    // Input elemen array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // Mengurutkan array dengan algoritma bubble sort
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - pass - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    
    // Output hasil pengurutan
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}
