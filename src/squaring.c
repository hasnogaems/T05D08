#include <stdio.h>

#define NMAX 10

int input(int*, int*);
void output(int*, int);
void squaring(int*, int);

int main() {
    //! showMemory(start=65520)
    int n, data[NMAX];
    input(data, &n);
    squaring(data, n);
    output(data, n);

    return 0;
}

int input(int* ina, int* inn) {
    if (scanf("%d", inn) != 1 && getchar() != ('\n' || ' ')) {
        printf("n/a\n");
        return 0;
    }
    for (int* p = ina; p - ina < *inn; p++) {
        if (scanf("%d", p) != 1 && getchar() != ('\n' || ' ')) {
            printf("n/a\n");
            return 0;
        }
    }
}

void output(int* outa, int outn) {
    for (int i = 0; i < outn; i++) {
        printf("%d ", outa[i]);
    }
    printf("\n");
}

void squaring(int* sqra, int sqrn) {
    for (int i = 0; i < sqrn; i++) {
        sqra[i] *= sqra[i];
    }
}
