#include <stdio.h>
int main() {
    int i;
    int j;
    while (scanf("%d %d",&i,&j) != EOF)
    {
        int i2 = i > j ? i:j;
        int j2 = i > j ? j:i;
        int max = 0;
            while (j2 <= i2) {
                int aux = j2;
                int counter = 1;
                while (aux != 1) {
                    counter++;
                    if ((aux % 2) != 0) {
                        aux = (aux * 3) + 1;
                    } else {
                        aux = aux / 2;
                    }
                }
                j2++;
                if (counter > max)
                    max = counter;
            }
        printf("%d %d %d\n",i,j,max);
    }
    return 0;
}