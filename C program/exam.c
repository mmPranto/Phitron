#include <stdio.h>
#include <string.h>
int main() {
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", str1, str2, str3);
    int len = strlen(str1);
    int operations = 0;
    for (int i = 0; i < len; i++) {
        if (str1[i] == str2[i] && str2[i] == str3[i]) {
            continue;
        } else if (str1[i] == str2[i] || str2[i] == str3[i] || str1[i] == str3[i]) {
            operations += 1;
        } else {
            operations += 2;
        }
    }
    printf("%d\n", operations);
    return 0;
}