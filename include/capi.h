#ifndef FICA_CAPI_H
#define FICA_CAPI_H

#include "fastica.h"
#include "winexport.h"

#ifdef __cplusplus
#include <cstdio>
#else
#include <stdlib.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

    typedef void* Matrix;
    
    FICA_EXPORT Matrix new_Matrix_c(const double* values, size_t rows, size_t cols);

    FICA_EXPORT Matrix new_Matrix_r(const double *values, size_t rows, size_t cols);

    FICA_EXPORT void free_Matrix(Matrix m);

    FICA_EXPORT void print_Matrix(Matrix matrix, const char *message);

    FICA_EXPORT Matrix fast_ica(Matrix dataset, Matrix ini_weights, Matrix white_mat, ICA_Params parameters);

    FICA_EXPORT double *copy_Matrix(Matrix matrix, double* buffer, bool dealloc);

    FICA_EXPORT unsigned int rows(Matrix matrix);

    FICA_EXPORT unsigned int cols(Matrix matrix);

    FICA_EXPORT unsigned int size(Matrix matrix);

    FICA_EXPORT ICA_Params default_ica_params(Matrix m);

#ifdef __cplusplus
}
#endif

#endif //FICA_CAPI_H
