#include <stdio.h>

int main() {
    int n, i, j;
    
    // Read size of matrix
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isIdentity = 1;   // Assume it is identity

    // Check identity matrix condition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && matrix[i][j] != 1) {
                isIdentity = 0;
            }
            if(i != j && matrix[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }

    // Output result
    if(isIdentity == 1) {
        printf("Identity Matrix");
    } else {
        printf("Not an Identity Matrix");
    }

    return 0;
}