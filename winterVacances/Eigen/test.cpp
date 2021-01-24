#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
using namespace std;
using namespace Eigen;

template <typename T> using Mat2 = Matrix<T, 2, 2>;

int main()
{
    Matrix2d mat1;
    Matrix2d mat2;
    mat1 << 1, 2,
            3, 4;
    mat2 << 5, 6,
            7, 8;
    cout << mat1 << endl;
    cout << mat1 + mat2;
    cout << mat1.col(1) << endl;
    cout << mat1.row(1) << endl;
    cout << mat1 << endl;
    cout << endl;
    cout << mat2 << endl;
    cout << endl;
    cout << mat1 + mat2 << endl;
    cout << endl;
    cout << mat1 - mat2 << endl;
    cout << endl;
    cout << mat1 * mat2 << endl;
    cout << endl;
    cout << mat1 / 2 << endl;
    cout << endl;
    cout << mat1 << endl;
    cout << endl;
    cout << mat1.transpose() << endl;
    cout << endl;
    cout << "mat1.transpose()" << endl;
    cout << endl;
    cout << mat1.conjugate() << endl;
    cout << endl;
    cout << "mat1.conjugate()" << endl;
    cout << endl;
    cout << mat1.inverse() << endl;
    cout << endl;
    cout << "mat1.inverse()" << endl;
    cout << endl;
    cout << mat1.adjoint() << endl;
    cout << endl;
    cout << "mat1.adjoint()" << endl;
    cout << endl;

    ArrayXd vec(9);
    vec << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    cout << vec << endl;
    cout << endl;
    cout << vec.head(3) << endl;
    cout << endl;
    cout << vec.tail(3) << endl;
    cout << endl;
    cout << vec.segment(3, 3) << endl;
    cout << endl;
    return 0;
}
