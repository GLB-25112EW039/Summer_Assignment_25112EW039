#include <stdio.h>
#include <string.h>

struct ItemData {
    char label[50];
    double worth;
};

void processAndShow(struct ItemData items[], int size, double threshold) {
    for (int i = 0; i < size; i++) {
        if (items[i].worth >= threshold) {
            printf("%s - %.2f\n", items[i].label, items[i].worth);
        }
    }
}

int main() {
    int size;
    scanf("%d", &size);
    struct ItemData data[size];

    for (int i = 0; i < size; i++) {
        scanf("%s %lf", data[i].label, &data[i].worth);
    }

    double cutoff;
    scanf("%lf", &cutoff);

    processAndShow(data, size, cutoff);

    return 0;
}