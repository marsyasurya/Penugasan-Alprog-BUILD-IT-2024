#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    
    // Input dua string
    scanf("%s", str1);
    scanf("%s", str2);
    
    //berbeda
    if (strlen(str1) != strlen(str2)) {
        printf("BERBEDA\n");
    } 
    //kalau panjang sama
    else if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    } 
    //kalau tdk identik
    else {
        printf("MIRIP\n");
    }
    
    return 0;
}
