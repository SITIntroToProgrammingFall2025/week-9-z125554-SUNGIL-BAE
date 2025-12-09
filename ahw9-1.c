#include <stdio.h>
#include <math.h>

int main() {
    int r, g, b;
    
    char *names[5] = {"Black", "Red", "Green", "Blue", "White"};
    int target_rgb[5][3] = {
        {0, 0, 0},
        {255, 0, 0},
        {0, 255, 0},
        {0, 0, 255},
        {255, 255, 255}
    };

    printf("Enter R,G,B\n");
    scanf("%d %d %d", &r, &g, &b);

    double min_distance = 1000000.0; 
    int nearest_index = -1;

    for (int i = 0; i < 5; i++) {

        double distance = sqrt(pow(r - target_rgb[i][0], 2) + 
                               pow(g - target_rgb[i][1], 2) + 
                               pow(b - target_rgb[i][2], 2));

        if (distance < min_distance) {
            min_distance = distance;
            nearest_index = i;
        }
    }

    printf("\nThe nearest color is %s\n", names[nearest_index]);

    return 0;
}

