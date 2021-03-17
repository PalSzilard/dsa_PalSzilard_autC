#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

int main() {

        Matrix* matrix;
        readMatrix("input.txt", &matrix);
        printMatrix(matrix);

        return 0;
    }

    return 0;
}
