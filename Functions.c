#include <stdio.h>

#define MAX_PLANES 10

struct plane {
    char model[50];
    char year[10];
    int price;
};

void populate_plane(struct plane planes[]) {
    int i;
    for (i = 0; i < MAX_PLANES; i++) {
        printf("Enter model of plane %d: ", i + 1);
        scanf("%s", planes[i].model);
        printf("Enter year of plane %d: ", i + 1);
        scanf("%s", planes[i].year);
        printf("Enter price of plane %d: ", i + 1);
        scanf("%d", &planes[i].price);
    }
}

void print_plane(struct plane planes[]) {
    int i;
    for (i = 0; i < MAX_PLANES; i++) {
        printf("Plane %d:\n", i + 1);
        printf("Model: %s\n", planes[i].model);
        printf("Year: %s\n", planes[i].year);
        printf("Price: %d\n", planes[i].price);
        printf("\n");
    }
}

int main() {
    struct plane planes[MAX_PLANES];
    populate_plane(planes);
    print_plane(planes);
    return 0;
}
