/* Project2.cpp
 * Ima Student
 * EE312, Spring 2017
 * Project 2, Matrix Multiplication
 */

#include <stdio.h>
#include <stdint.h>
#include "MatrixMultiply.h"

void multiplyMatrices(
        double a[],
        const uint32_t a_rows,
        const uint32_t a_cols,
        double b[],
        const uint32_t b_cols,
        double c[]) {

        int i=0;
        while (i<a_rows){
            int j=0;
            while (j<b_cols){
                int k=0;
                c[i*a_cols+j]=0;
                while (k<a_cols){
                    c[i*a_cols+j]+=(a[i*a_cols+k]*b[k*b_cols+j]);
                    k++;
                }
                j++;
            }
            i++;
        }
}

double** multiplyMatricesPtr(
        double** a,
        const uint32_t a_rows,
        const uint32_t a_cols,
        double** b,
        const uint32_t b_cols) {
    return NULL;
}

// https://en.wikipedia.org/wiki/Transpose
double** transposeMatrix(
         double** a,
         const uint32_t a_rows,
         const uint32_t a_cols) {
    return NULL;
}
