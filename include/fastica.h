#ifndef FICA_FASTICA_H
#define FICA_FASTICA_H

#include "contrast.h"
#include "whitening.h"
#include "winexport.h"

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct {
        unsigned int n_components;
        double conv_threshold;
        double alpha;
        unsigned int max_iter;
        WhiteningTypeId white_type_id;
        ContrastFunctionId cont_func_id;
        bool verbose;
        unsigned int *seed;
    } ICA_Params;


#ifdef __cplusplus
}

namespace fastica {

    FICA_EXPORT Eigen::MatrixXd *fast_ica(
            const Eigen::MatrixXd& dataset,
            const Eigen::MatrixXd *white_matrix,
            const Eigen::MatrixXd *weights,
            ICA_Params parameters
    );

}
#endif // C++ header files and definitions

#endif //FICA_FASTICA_H
