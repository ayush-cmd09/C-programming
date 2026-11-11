#include <stdio.h>
int main() {
    int n, c = 0;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        int flag = 0;

        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            c++;
        }
    }

    printf("%d", c);
    return 0;
}
