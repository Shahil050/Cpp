#include<iostream>
using namespace std;
class Matrix{
    private:
        double **A;
        int nrow,ncol;

    public:
        Matrix(int,int);
        void read();
        void print();
        double& operator()(int,int);
        int get_nrow();
        int get_ncol();
        ~Matrix();
        
}
Matrix::Matrix(int nR,int nC){
    nrow=nR;
    ncol=nC;
    A=new double*[nrow];
    for(int i=0;i<nrow;i++){
        A[i]=new double[ncol];
    }
}void Matrix::read(){
    for(int i=0;i<nrow;i++){
        for(int j=0;j<ncol;j++){
            A[i]
        }
    }
}