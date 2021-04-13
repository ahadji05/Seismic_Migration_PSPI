
#include "linalg.hpp"

void mat_vec(fcomp * vec_out, fcomp * mat, fcomp * vec, int N, int M){

    for (unsigned int i=0; i<N; i++)
        for (unsigned int j=0; j<M; j++)
            vec_out[j] += mat[i*M+j] * vec[j];

}
