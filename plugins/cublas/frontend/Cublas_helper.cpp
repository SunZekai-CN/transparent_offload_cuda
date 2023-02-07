/*
 * gVirtuS -- A GPGPU transparent virtualization component.
 *
 * Copyright (C) 2009-2010  The University of Napoli Parthenope at Naples.
 *
 * This file is part of gVirtuS.
 *
 * gVirtuS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * gVirtuS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gVirtuS; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Written by: Giuseppe Coviello <giuseppe.coviello@uniparthenope.it>,
 *             Department of Applied Science
 */

#include <iostream>
#include <cstdio>
#include <string>

#include "CublasFrontend.h"
#include "assert.h"
using namespace std;

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDtrsmBatched( cublasHandle_t    handle,
                                   cublasSideMode_t  side,
                                   cublasFillMode_t  uplo,
                                   cublasOperation_t trans,
                                   cublasDiagType_t  diag,
                                   int m,
                                   int n,
                                   const double *alpha,
                                   const double *const A[],
                                   int lda,
                                   double *const B[],
                                   int ldb,
                                   int batchCount){
    printf("cublasDtrsmBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulDescCreate(cudaDataType_t scaleType){
    printf("cublasLtMatmulDescCreate undone\n");
    assert(0);                                        
    }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulDescSetAttribute(const void *buf,size_t sizeInBytes){
    printf("cublasLtMatmulDescSetAttribute undone\n");
    assert(0); 
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZgetrfBatched(cublasHandle_t handle,
                                   int n,
                                   cuDoubleComplex *const Aarray[],
                                   int lda,
                                   int *PivotArray,
                                   int *infoArray,
                                   int batchSize){
    printf("cublasZgetrfBatched undone\n");
    assert(0); 
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgemmEx(cublasHandle_t handle,
                           cublasOperation_t transa,
                           cublasOperation_t transb,
                           int m,
                           int n,
                           int k,
                           const float    *alpha,
                           const void     *A,
                           cudaDataType_t Atype,
                           int lda,
                           const void     *B,
                           cudaDataType_t Btype,
                           int ldb,
                           const float    *beta,
                           void           *C,
                           cudaDataType_t Ctype,
                           int ldc){
    printf("cublasSgemmEx undone\n");
    assert(0);                         
                           }

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZgelsBatched( cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int m,
                                   int n,
                                   int nrhs,
                                   cuDoubleComplex *const Aarray[],
                                   int lda,
                                   cuDoubleComplex *const Carray[],
                                   int ldc,
                                   int *info,
                                   int *devInfoArray,
                                   int batchSize ){
    printf("cublasZgelsBatched undone\n");
    assert(0); 
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgeqrfBatched( cublasHandle_t handle,
                                    int m,
                                    int n,
                                    cuComplex *const Aarray[],
                                    int lda,
                                    cuComplex *const TauArray[],
                                    int *info,
                                    int batchSize){
    printf("cublasCgeqrfBatched undone\n");
    assert(0);                                     
                                    }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZgeqrfBatched( cublasHandle_t handle,
                                    int m,
                                    int n,
                                    cuDoubleComplex *const Aarray[],
                                    int lda,
                                    cuDoubleComplex *const TauArray[],
                                    int *info,
                                    int batchSize){
    printf("cublasZgeqrfBatched undone\n");
    assert(0);                                   
                                    }

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgelsBatched( cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int m,
                                   int n,
                                   int nrhs,
                                   float *const Aarray[],
                                   int lda,
                                   float *const Carray[],
                                   int ldc,
                                   int *info,
                                   int *devInfoArray,
                                   int batchSize ){
    printf("cublasSgelsBatched undone\n");
    assert(0);                                  
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulPreferenceCreate(){
    printf("cublasLtMatmulPreferenceCreate undone\n");
    assert(0);     
      }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasStrsmBatched( cublasHandle_t    handle,
                                   cublasSideMode_t  side,
                                   cublasFillMode_t  uplo,
                                   cublasOperation_t trans,
                                   cublasDiagType_t  diag,
                                   int m,
                                   int n,
                                   const float *alpha,
                                   const float *const A[],
                                   int lda,
                                   float *const B[],
                                   int ldb,
                                   int batchCount){
    printf("cublasStrsmBatched undone\n");
    assert(0);                                 
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZtrsmBatched( cublasHandle_t    handle,
                                   cublasSideMode_t  side,
                                   cublasFillMode_t  uplo,
                                   cublasOperation_t trans,
                                   cublasDiagType_t  diag,
                                   int m,
                                   int n,
                                   const cuDoubleComplex *alpha,
                                   const cuDoubleComplex *const A[],
                                   int lda,
                                   cuDoubleComplex *const B[],
                                   int ldb,
                                   int batchCount){
    printf("cublasZtrsmBatched undone\n");
    assert(0);                                 
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDgetrsBatched(cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int n,
                                   int nrhs,
                                   const double *const Aarray[],
                                   int lda,
                                   const int *devIpiv,
                                   double *const Barray[],
                                   int ldb,
                                   int *info,
                                   int batchSize){
    printf("cublasDgetrsBatched undone\n");
    assert(0);      
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgetrsBatched(cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int n,
                                   int nrhs,
                                   const float *const Aarray[],
                                   int lda,
                                   const int *devIpiv,
                                   float *const Barray[],
                                   int ldb,
                                   int *info,
                                   int batchSize){
    printf("cublasSgetrsBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgetrsBatched(cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int n,
                                   int nrhs,
                                   const cuComplex *const Aarray[],
                                   int lda,
                                   const int *devIpiv,
                                   cuComplex *const Barray[],
                                   int ldb,
                                   int *info,
                                   int batchSize){
    printf("cublasCgetrsBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZgetrsBatched(cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int n,
                                   int nrhs,
                                   const cuDoubleComplex *const Aarray[],
                                   int lda,
                                   const int *devIpiv,
                                   cuDoubleComplex *const Barray[],
                                   int ldb,
                                   int *info,
                                   int batchSize){
    printf("cublasZgetrsBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetMathMode(cublasHandle_t handle, cublasMath_t *mode){
    printf("cublasGetMathMode undone\n");
    assert(0);
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulPreferenceDestroy(){
    printf("cublasLtMatmulPreferenceDestroy undone\n");
    assert(0);
      }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDgelsBatched( cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int m,
                                   int n,
                                   int nrhs,
                                   double *const Aarray[],
                                   int lda,
                                   double *const Carray[],
                                   int ldc,
                                   int *info,
                                   int *devInfoArray,
                                   int batchSize ){
    printf("cublasDgelsBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgelsBatched( cublasHandle_t handle,
                                   cublasOperation_t trans,
                                   int m,
                                   int n,
                                   int nrhs,
                                   cuComplex *const Aarray[],
                                   int lda,
                                   cuComplex *const Carray[],
                                   int ldc,
                                   int *info,
                                   int *devInfoArray,
                                   int batchSize ){
    printf("cublasCgelsBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgeqrfBatched( cublasHandle_t handle,
                                    int m,
                                    int n,
                                    float *const Aarray[],
                                    int lda,
                                    float *const TauArray[],
                                    int *info,
                                    int batchSize){
    printf("cublasSgeqrfBatched undone\n");
    assert(0);
                                    }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDgeqrfBatched( cublasHandle_t handle,
                                    int m,
                                    int n,
                                    double *const Aarray[],
                                    int lda,
                                    double *const TauArray[],
                                    int *info,
                                    int batchSize){
    printf("cublasDgeqrfBatched undone\n");
    assert(0);
                                    }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulAlgoGetHeuristic(int requestedAlgoCount,int *returnAlgoCount)
{
    printf("cublasLtMatmulAlgoGetHeuristic undone\n");
    assert(0);
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGemmStridedBatchedEx(cublasHandle_t handle,
                            cublasOperation_t transa,
                            cublasOperation_t transb,
                            int m,
                            int n,
                            int k,
                            const void    *alpha,
                            const void     *A,
                            cudaDataType_t Atype,
                            int lda,
                            long long int strideA,
                            const void     *B,
                            cudaDataType_t Btype,
                            int ldb,
                            long long int strideB,
                            const void    *beta,
                            void           *C,
                            cudaDataType_t Ctype,
                            int ldc,
                            long long int strideC,
                            int batchCount,
                            cublasComputeType_t computeType,
                            cublasGemmAlgo_t algo){
    printf("cublasGemmStridedBatchedEx undone\n");
    assert(0);                                
                            }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulDescDestroy(){
    printf("cublasLtMatmulDescDestroy undone\n");
    assert(0);
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCtrsmBatched( cublasHandle_t    handle,
                                   cublasSideMode_t  side,
                                   cublasFillMode_t  uplo,
                                   cublasOperation_t trans,
                                   cublasDiagType_t  diag,
                                   int m,
                                   int n,
                                   const cuComplex *alpha,
                                   const cuComplex *const A[],
                                   int lda,
                                   cuComplex *const B[],
                                   int ldb,
                                   int batchCount){
    printf("cublasCtrsmBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgetrfBatched(cublasHandle_t handle,
                                   int n,
                                   float *const Aarray[],
                                   int lda,
                                   int *PivotArray,
                                   int *infoArray,
                                   int batchSize){
    printf("cublasSgetrfBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDgetrfBatched(cublasHandle_t handle,
                                   int n,
                                   double *const Aarray[],
                                   int lda,
                                   int *PivotArray,
                                   int *infoArray,
                                   int batchSize){
    printf("cublasDgetrfBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgetrfBatched(cublasHandle_t handle,
                                   int n,
                                   cuComplex *const Aarray[],
                                   int lda,
                                   int *PivotArray,
                                   int *infoArray,
                                   int batchSize){
    printf("cublasCgetrfBatched undone\n");
    assert(0);
                                   }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSgemmStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const float           *alpha,
                                  const float           *A, int lda,
                                  long long int          strideA,
                                  const float           *B, int ldb,
                                  long long int          strideB,
                                  const float           *beta,
                                  float                 *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasSgemmStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasHgemmStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const __half           *alpha,
                                  const __half           *A, int lda,
                                  long long int          strideA,
                                  const __half           *B, int ldb,
                                  long long int          strideB,
                                  const __half           *beta,
                                  __half                 *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasHgemmStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDgemmStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const double          *alpha,
                                  const double          *A, int lda,
                                  long long int          strideA,
                                  const double          *B, int ldb,
                                  long long int          strideB,
                                  const double          *beta,
                                  double                *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasDgemmStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgemmStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const cuComplex       *alpha,
                                  const cuComplex       *A, int lda,
                                  long long int          strideA,
                                  const cuComplex       *B, int ldb,
                                  long long int          strideB,
                                  const cuComplex       *beta,
                                  cuComplex             *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasCgemmStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCgemm3mStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const cuComplex       *alpha,
                                  const cuComplex       *A, int lda,
                                  long long int          strideA,
                                  const cuComplex       *B, int ldb,
                                  long long int          strideB,
                                  const cuComplex       *beta,
                                  cuComplex             *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasCgemm3mStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasZgemmStridedBatched(cublasHandle_t handle,
                                  cublasOperation_t transa,
                                  cublasOperation_t transb,
                                  int m, int n, int k,
                                  const cuDoubleComplex *alpha,
                                  const cuDoubleComplex *A, int lda,
                                  long long int          strideA,
                                  const cuDoubleComplex *B, int ldb,
                                  long long int          strideB,
                                  const cuDoubleComplex *beta,
                                  cuDoubleComplex       *C, int ldc,
                                  long long int          strideC,
                                  int batchCount){
    printf("cublasZgemmStridedBatched undone\n");
    assert(0);
                                  }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmul(
      const void                    *alpha,
      const void                    *A,
      const void                    *B,
      const void                    *beta,
      const void                    *C,
      void                          *D,
      void                          *workspace,
      size_t                         workspaceSizeInBytes,
      cudaStream_t                   stream){
    printf("cublasLtMatmul undone\n");
    assert(0);
      }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetMathMode(cublasHandle_t handle, cublasMath_t mode){
    printf("cublasSetMathMode undone\n");
    assert(0);
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGemmEx(cublasHandle_t handle,
                           cublasOperation_t transa,
                           cublasOperation_t transb,
                           int m,
                           int n,
                           int k,
                           const void    *alpha,
                           const void     *A,
                           cudaDataType_t Atype,
                           int lda,
                           const void     *B,
                           cudaDataType_t Btype,
                           int ldb,
                           const void    *beta,
                           void           *C,
                           cudaDataType_t Ctype,
                           int ldc,
                           cublasComputeType_t computeType,
                           cublasGemmAlgo_t algo){
    printf("cublasGemmEx undone\n");
    assert(0);
}                        
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatrixLayoutCreate(cudaDataType type,uint64_t rows,uint64_t cols,int64_t ld){
    printf("cublasLtMatrixLayoutCreate undone\n");
    assert(0);
                                           }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatrixLayoutDestroy(){
    printf("cublasLtMatrixLayoutDestroy undone\n");
    assert(0);
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulPreferenceSetAttribute(
      const void *buf,
      size_t sizeInBytes){
    printf("cublasLtMatmulPreferenceSetAttribute undone\n");
    assert(0);
      }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasLtMatmulPreferenceGetAttribute(
      void *buf,
      size_t sizeInBytes,
      size_t *sizeWritten){
    printf("cublasLtMatmulPreferenceGetAttribute undone\n");
    assert(0);
      }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDotEx (cublasHandle_t handle,
                            int n,
                            const void *x,
                            cudaDataType xType,
                            int incx,
                            const void *y,
                            cudaDataType yType,
                            int incy,
                            void *result,
                            cudaDataType resultType,
                            cudaDataType executionType){
    printf("cublasDotEx undone\n");
    assert(0);
                            }
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDotcEx (cublasHandle_t handle,
                             int n,
                             const void *x,
                             cudaDataType xType,
                             int incx,
                             const void *y,
                             cudaDataType yType,
                             int incy,
                             void *result,
                             cudaDataType resultType,
                             cudaDataType executionType){
    printf("cublasDotcEx undone\n");
    assert(0);
                             }




extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasCreate_v2(cublasHandle_t *handle) {
    CublasFrontend::Prepare();
    //CublasFrontend::AddHostPointerForArguments<cublasHandle_t>(handle);
    CublasFrontend::Execute("cublasCreate_v2");
    if(CublasFrontend::Success())
        *handle = (CublasFrontend::GetOutputVariable<cublasHandle_t>());
    return CublasFrontend::GetExitCode();
}


extern "C"  CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetVector(int n, int elemSize, const void *x, int incx, void *y, int incy) {
    CublasFrontend::Prepare();
    CublasFrontend::AddVariableForArguments<int>(n);
    CublasFrontend::AddVariableForArguments<int>(elemSize);
    //CublasFrontend::AddHostPointerForArguments(x,sizeof(x));
            
    CublasFrontend::AddVariableForArguments<int>(incx);
    CublasFrontend::AddVariableForArguments<int>(incy);
    CublasFrontend::AddDevicePointerForArguments(y);
    CublasFrontend::AddHostPointerForArguments<char>(static_cast<char *>
                    (const_cast<void *> (x)), n*elemSize);
    CublasFrontend::Execute("cublasSetVector");
    return CublasFrontend::GetExitCode(); 
}

extern "C"  CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetMatrix(int rows, int cols, int elemSize, const void *A, int lda, void *B, int ldb){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<int>(rows);
    CublasFrontend::AddVariableForArguments<int>(cols);
    CublasFrontend::AddVariableForArguments<int>(elemSize);
    CublasFrontend::AddDevicePointerForArguments(B);
    CublasFrontend::AddVariableForArguments<int>(ldb);
    CublasFrontend::AddVariableForArguments<int>(lda);
    CublasFrontend::AddHostPointerForArguments<char>(static_cast<char *>
                    (const_cast<void *> (A)), rows*cols*elemSize);
    CublasFrontend::Execute("cublasSetMatrix");
    return CublasFrontend::GetExitCode();
}

/* This function copies n elements from a vector x in GPU memory space to a vector y in host memory space. 
 * Elements in both vectors are assumed to have a size of elemSize bytes. The storage spacing between consecutive elements is given by incx for the source vector and incy for the destination vector y.
 */
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetVector(int n, int elemSize, const void *x, int incx, void *y, int incy){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<int>(n);
    CublasFrontend::AddVariableForArguments<int>(elemSize);
    CublasFrontend::AddVariableForArguments<int>(incx);
    CublasFrontend::AddVariableForArguments<int>(incy);
    
    //void * _x = const_cast<void *>(x);
    CublasFrontend::AddDevicePointerForArguments(x);
    CublasFrontend::AddHostPointerForArguments<void>(y);
    
    CublasFrontend::Execute("cublasGetVector");
    
    if (CublasFrontend::Success()){
        memmove(y,CublasFrontend::GetOutputHostPointer<char>(n*elemSize),n*elemSize);
    }
    return CublasFrontend::GetExitCode();
}

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetMatrix(int rows, int cols, int elemSize, const void *A, int lda, void *B, int ldb){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<int>(rows);
    CublasFrontend::AddVariableForArguments<int>(cols);
    CublasFrontend::AddVariableForArguments<int>(elemSize);
    CublasFrontend::AddDevicePointerForArguments(A);
    CublasFrontend::AddVariableForArguments<int>(lda);
    CublasFrontend::AddHostPointerForArguments<void>(B);
    CublasFrontend::AddVariableForArguments<int>(ldb);
    
    CublasFrontend::Execute("cublasGetMatrix");
    
    if(CublasFrontend::Success()){
        memmove(B,CublasFrontend::GetOutputHostPointer<char>(rows*cols*elemSize),rows*cols*elemSize);
    }
    return CublasFrontend::GetExitCode();
}

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasDestroy_v2 (cublasHandle_t handle) {
    CublasFrontend::Prepare();
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::Execute("cublasDestroy_v2");
    return CublasFrontend::GetExitCode();
}


extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetVersion_v2 (cublasHandle_t handle,int *version) {
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::Execute("cublasGetVersion");
    if (CublasFrontend::Success())
        *version = *(CublasFrontend::GetOutputHostPointer<int>());
    return CublasFrontend::GetExitCode();
}

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetStream_v2 (cublasHandle_t handle, cudaStream_t streamId) {
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::AddVariableForArguments<long long int>((long long int)streamId);
    CublasFrontend::Execute("cublasSetStream_v2");
    return CublasFrontend::GetExitCode();
}

extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetStream_v2(cublasHandle_t handle, cudaStream_t *streamId){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::Execute("cublasGetStream_v2");
    if(CublasFrontend::Success())
        *streamId = (cudaStream_t) CublasFrontend::GetOutputVariable<long long int>();
    return CublasFrontend::GetExitCode();
}


extern "C"  CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetPointerMode_v2(cublasHandle_t handle, cublasPointerMode_t *mode){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::Execute("cublasGetPointerMode_v2");
    if(CublasFrontend::Success())
        *mode = CublasFrontend::GetOutputVariable<cublasPointerMode_t>();
    return CublasFrontend::GetExitCode();
} 

extern "C"  CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetPointerMode_v2(cublasHandle_t handle, cublasPointerMode_t mode){
    CublasFrontend::Prepare();
    
    CublasFrontend::AddVariableForArguments<long long int>((long long int)handle);
    CublasFrontend::AddVariableForArguments<cublasPointerMode_t>(mode);
    CublasFrontend::Execute("cublasSetPointerMode_v2");
    return CublasFrontend::GetExitCode();
}

/*
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasGetMatrix (int rows, int cols, int elemSize, const void *A, int lda, void *B, int ldb) {
    CublasFrontend::Prepare();
    CublasFrontend::AddVariableForArguments(rows);
    CublasFrontend::AddVariableForArguments(cols);
    CublasFrontend::AddVariableForArguments(elemSize);
    CublasFrontend::AddDevicePointerForArguments(A); 
    CublasFrontend::AddVariableForArguments(lda);
    CublasFrontend::AddHostPointerForArguments(B);
    CublasFrontend::AddVariableForArguments(ldb);
    CublasFrontend::Execute("cublasGetMatrix");
    return CublasFrontend::GetExitCode(); 
}
extern "C" CUBLASAPI cublasStatus_t CUBLASWINAPI cublasSetMatrix (int rows, int cols, int elemSize, const void *A, int lda, void *B, int ldb){
    CublasFrontend::Prepare();
    CublasFrontend::AddVariableForArguments(rows);
    CublasFrontend::AddVariableForArguments(cols);
    CublasFrontend::AddVariableForArguments(elemSize);
    CublasFrontend::AddHostPointerForArguments(A);
    CublasFrontend::AddVariableForArguments(lda);
    CublasFrontend::AddDevicePointerForArguments(B);
    CublasFrontend::AddVariableForArguments(ldb);
    CublasFrontend::Execute("cublasSetMatrix");
    return CublasFrontend::GetExitCode();

}*/
