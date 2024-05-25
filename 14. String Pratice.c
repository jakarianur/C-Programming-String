#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char outcomes[n+1];
    scanf("%s", outcomes);
    int a_count = 0, d_count = 0;
    for (int i = 0; i < n; i++) {
        if (outcomes[i] == 'A') {
            a_count++;
        } else if (outcomes[i] == 'D') {
            d_count++;
        }
    }
    if (a_count > d_count) {
        printf("Anton\n");
    } else if (a_count < d_count) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }
    return 0;
}
