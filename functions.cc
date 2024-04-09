#include <stdio.h>
void populate plane(struct inpatient plane)
 {

    int i;
    for (i = 0; i < 10; i++)
     {
        printf("Enter model of plane %d: ", i + 1);
        scanf("%s",plane->plane[i].model);
        printf("year%d: ", i + 1);
        scanf("%s", plane->plane[i].year);
        printf("Enter %d: ", i + 1);
        scanf("%d", &plane->plane[i].price);
    }
}

void print_plane(struct plane) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("plane:%d\n", i + 1);
        printf("model: %s\n", plane->plane[i].model);
        printf("plane: %s\n", plane->plane[i].year);
        printf("age: %d\n", plane->plane[i].price);
    }
}

int main() {
    struct plane;
    populate_plane;
    print_plane;
    return 0;

}
