#include <stdio.h>

int main() {
    int n,m;
    int field = 1;
    int count;
    scanf("%d %d",&n,&m);
    while (n != 0 && m != 0) {
        char map[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m ; ++j) {
                scanf("%c",&map[i][j]);
                if(map[i][j] == 10) scanf("%c",&map[i][j]);
            }
        }
        if(field != 1) printf("\n");

        printf("Field #%d:\n",field);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                count = 0;
                if (map[i][j] != 42) {
                    if (map[i - 1][j-1] == 42 && i > 0 && j > 0) count++;//arriba izquierda
                    if (map[i - 1][j + 1] == 42 && i > 0 && j < m-1) count++;//arriba derecha
                    if (map[i - 1][j] == 42 && i > 0) count++;//arriba centro
                    if (map[i][j + 1] == 42 && j < m-1) count++;//en linea derecha
                    if (map[i][j - 1] == 42 && j > 0) count++;//en linea izquierda
                    if (map[i + 1][j + 1] == 42 && i < n-1 && j < m-1) count++;//debajo derecha
                    if (map[i + 1][j] == 42 && i < n-1) count++;//debajo centro
                    if (map[i + 1][j - 1] == 42 && i < n-1 && j > 0) count++;//debajo izquierda
                    printf("%d",count);
                }else {
                    putchar(42);
                }
            }
            printf("\n");
        }
        scanf("%d",&n);
        scanf("%d",&m);
        field++;
    }
    return 0;
}
