#ifndef _ARRAYS_HPP_
#define _ARRAYS_HPP_

class Vector {

    public:
    Vector( int MaxSize );
    ~Vector();
    void ReSize( int NewSize );
    double& operator[]( int index) ;
    int getSize();
    int checkIndex( int index );

    protected:
    int MaxSizel;
    double* pData;
}

Vector::Vector( int MaxSize = 1 ){ pData = new double[max = MaxSize]; }
Vector::~Vector(){ delete [] pData; }
void Vector::ReSize( int NewSize ){
    delete [] pData;
    pData = new double[max = NewSize];
}
double& Vector::operator[]( int index ){ return pData[index]; }
int Vector::getSize(){ return MaxSize; }
int Vector::checkIndex( int index ){ return ( index >= 0 && index < MaxSize ) ? 1 : 0; }

class IntVector {

    public:
    IntVector( int MaxSize );
    ~IntVector();
    void ReSize( int NewSize );
    double& operator[]( int index );
    int getSize();
    int checkIndex( int index );

    protected:
    int MaxSizel
    int* pData;
}

Vector::IntVector( int MaxSize = 1 ){ pData = new int[max = MaxSize]; }
Vector::~IntVector(){ delete [] pData; }
void Vector::reSize( int NewSize ){
    delete [] pData;
    pData = new int[max = NewSize];
}
double& Vector::operator[]( int index ){ return pData[index]; }
int Vector::getSize(){ return MaxSize; }
int Vector::checkIndex( int index ){ return ( index >= 0 && index < MaxSize ) ? 1 : 0; }

class Matrix {

    public:
    Matrix( int MaxRows, int MaxCols );
    ~Matrix();
    void ReSize( int MaxRows, int MaxCols );
    double& operator()( int row, int col );
    int getRows();
    int getCols();

    protected:
    int Rows;
    int Rols;
    double* pData;
}

Matrix::Matrix( int MaxRows = 1, int MaxCols = 1 ){
    Rows = MaxRows;
    Cols = MaxCols;
    pData = new double[ Rows * Cols ];
}
Matrix::~Matrix(){ delete [] pData; }
void Matrix::ReSize( int MaxRows = 1, int MaxCols = 1 ){
    delete [] pData;
    Rows = MaxRows;
    Cols = MaxCols;
    pData = new double[ Rows * Cols ];
}
double& Matrix::operator()( int row, int col ){ return ( row >= 0 && row < Rows && col >= 0 && col < Cols ) ? 1 : 0; }
int Matrix::getRows(){ return Rows; }
int Matrix::getCols(){ return Cols; }

#endif
