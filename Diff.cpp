#include <iostream>
using namespace std;

class NumericalDiff {
    public:
    float TwoPointDiff1 ( float x );
    float TwoPointDiff2 ( float x );
    float ThreePointDiff ( float x );
    protected:
    float h = 1e-4;
};

/* f'(x) = f(x+h) - f(x) / h */
float NumericalDiff::TwoPointDiff1( float x ) {
    float function( float );
    return ( function( x + h ) - function( x ) ) / h;
}

/* f'(x) = f(x) - f(x-h) / h */
float NumericalDiff::TwoPointDiff2( float x ) {
    float function( float );
    return ( function( x ) - function( x - h ) ) / h;
}

/* f'(x) = f(x+h) - f(x-h) / 2h */
float NumericalDiff::ThreePointDiff( float x ) {
    float function( float );
    return ( function( x + h ) - function( x - h ) ) / ( h * 2 );
}

int main () {
    
    float function( float );
    NumericalDiff diff;
    float t1 = diff.TwoPointDiff1( 10.0 );
    float t2 = diff.TwoPointDiff2( 10.0 );
    float n = diff.ThreePointDiff( 10.0 );

    cout << function( 10.0 ) << "\n";
    cout << "f'(x) = f(x+h) - f(x) / h : " << t1 << "\n";
    cout << "f'(x) = f(x) - f(x-h) / h : " << t2 << "\n";
    cout << "f'(x) = f(x+h) - f(x-h) / 2h : "<< n << "\n";

    return 0;
}

/* f(x) = x^2 */
float function ( float x ) {
    return x * x;
}