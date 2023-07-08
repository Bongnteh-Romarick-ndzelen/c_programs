#include <stdio.h>

void print_matrix(int m, int n, float matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void echelon_form(int m, int n, float matrix[m][n]) {
    int lead = 0;
    for (int r = 0; r < m; r++) {
        if (n <= lead) {
            return;
        }
        int i = r;
        while (matrix[i][lead] == 0) {
            i++;
            if (m == i) {
                i = r;
                lead++;
                if (n == lead) {
                    return;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            float temp = matrix[r][j];
            matrix[r][j] = matrix[i][j];
            matrix[i][j] = temp;
        }
        float div = matrix[r][lead];
        for (int j = 0; j < n; j++) {
            matrix[r][j] /= div;
        }
        for (int j = 0; j < m; j++) {
            if (j != r) {
                float sub = matrix[j][lead];
                for (int k = 0; k < n; k++) {
                    matrix[j][k] -= (sub * matrix[r][k]);
                }
            }
        }
        lead++;
    }
}

int main() {
    // Example matrix
    float matrix[3][4] = {
        {2.0, 1.0, -1.0, 8.0},
        {-3.0, -1.0, 2.0, -11.0},
        {-2.0, 1.0, 2.0, -3.0}
    };
    int m = 3;
    int n = 4;
    
    printf("Original matrix:\n");
    print_matrix(m, n, matrix);
    
    echelon_form(m, n, matrix);
    
    printf("Echelon form matrix:\n");
    print_matrix(m, n, matrix);
    
    return 0;
}