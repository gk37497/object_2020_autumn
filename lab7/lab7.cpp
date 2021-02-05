#include <iostream>
#include <cstring>

using namespace std;
//matrixiig ilerhiileh class zaralj bn
class Matrix
{
private:
    //martixiin mur baganii hemjeeg hadgalh huwisagch
    int row, col;
    //utguudiin awah
    float **values;

public:
    Matrix();                      //anhdagch baiguulagch
    Matrix(int rowM, int columnM); //parametrtei baiguulagch
    ~Matrix();                     //ustgagch

    void garaasUtgaAwah(); //garaas utga awch bui heseg
    void print();
    float getValues(int d1, int d2);         //utga butsaah
    void setValues(float a, int d1, int d2); //utga zasah
    int get_col();                           //baganiin toog butsaana
    void set_col(int n);                     //baganiig uurchluh
    int get_row();                           //mur awah
    void set_row(int m);                     //mriin hemjee uurchluh

    Matrix operator+(const Matrix &m1); //
    Matrix operator+(float a);
    Matrix operator*(const Matrix &m1);
    Matrix operator-(const Matrix &m1);
    Matrix &operator=(const Matrix &T);
    Matrix &operator+=(const Matrix &mat);
    Matrix &operator-=(const Matrix &mat);
    Matrix &operator*=(const Matrix &T);
    Matrix operator-();
    void operator++();
    void operator--();
    float operator[](int);
};

Matrix::Matrix()
{
}

Matrix::Matrix(int rowM, int columnM)
{
    row = rowM;
    col = columnM;

    values = new float *[row];
    for (int i = 0; i < row; i++)
        values[i] = new float[col];
}

Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete values[i];
    delete[] values;
}

float Matrix::getValues(int d1, int d2)
{
    return values[d1][d2];
}

void Matrix::setValues(float a, int d1, int d2)
{
    values[d1][d2] = a;
}

int Matrix::get_col()
{
    return col;
}

void Matrix::set_col(int n)
{
    Matrix::col = n;
}

int Matrix::get_row()
{
    return row;
}

void Matrix::set_row(int m)
{
    Matrix::row = m;
}

void Matrix::garaasUtgaAwah()
{
    cout << "Matrix-iin utguudiig oruulna uu?:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> values[i][j];
        }
    }
}

void Matrix::print()
{
    cout << "Matrix :\n";
    for (int i = 0; i < row; i++)
    {
        cout << endl;
        for (int j = 0; j < col; j++)
        {
            cout << getValues(i, j) << " ";
        }
    }
    cout << endl;
}

Matrix Matrix::operator+(const Matrix &m1)
{
    Matrix mat(this->row, this->col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat.values[i][j] = this->values[i][j] + m1.values[i][j];
        }
    }
    return mat;
}

Matrix Matrix::operator+(float a)
{
    Matrix mat(this->row, this->col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat.values[i][j] = this->values[i][j] + a;
        }
    }
    return mat;
}

Matrix Matrix::operator-(const Matrix &m1)
{
    Matrix mat(this->row, this->col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat.values[i][j] = this->values[i][j] - m1.values[i][j];
        }
    }
    return mat;
}

Matrix Matrix::operator*(const Matrix &m1)
{
    Matrix mat(m1.row, this->col);
    if (this->col == m1.row)
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int k = 0; k < m1.col; k++)
            {
                for (int j = 0; j < m1.row; j++)
                {
                    mat.values[i][k] += this->values[i][j] * m1.values[j][k];
                }
            }
        }
        return mat;
    }
    throw; //???
}

Matrix &Matrix::operator+=(const Matrix &mat)
{
    col = mat.col;
    row = mat.row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            values[i][j] = values[i][j] + mat.values[i][j];
        }
    }
    return *this;
}

Matrix &Matrix::operator-=(const Matrix &mat)
{
    col = mat.col;
    row = mat.row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            values[i][j] = values[i][j] - mat.values[i][j];
        }
    }
    return *this;
}

Matrix Matrix::operator-()
{
    Matrix mat(row, col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            mat.values[i][j] = values[j][i];
        }
    }
    return mat;
}
Matrix &Matrix::operator=(const Matrix &T)
{
    Matrix mat(T.row, T.col);
    mat.values = T.values;
    mat.col = T.col;
    mat.row = T.row;
    return mat;
}

Matrix &Matrix::operator*=(const Matrix &m1)
{
    Matrix B(m1.row, this->col);
    if (this->col == m1.row)
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int k = 0; k < m1.col; k++)
            {
                for (int j = 0; j < m1.row; j++)
                {
                    B.values[i][k] += this->values[i][j] * m1.values[j][k];
                }
            }
        }
        return B;
    }
    return *this;
}

void Matrix::operator++()
{
    for (int i = 0; i < row; ++i)
    {
        for (int k = 0; k < col; ++k)
        {
            values[i][k] = values[i][k] + 1;
        }
    }
}

void Matrix::operator--()
{
    for (int i = 0; i < row; ++i)
    {
        for (int k = 0; k < col; ++k)
        {
            values[i][k] = values[i][k] - 1;
        }
    }
}

float Matrix::operator[](int i)
{
    return values[i - 1][i - 1];
}
void error()
{
    cout << "Aldaa !!!: mur baganii hemjee taarahgvi bn" << endl;
}
int main()
{
    int row, col, row1, col1, aaa;
    float k;
    cout << "1-r matrix-iin Mor Baganiin toog oruulna u?\n";
    cout << "mor = ";
    cin >> row;
    cout << "bagana = ";
    cin >> col;
    Matrix mat1(row, col);
    mat1.garaasUtgaAwah();
    mat1.print();

    cout << "2-r matrix-iin Mor Baganiin toog oruulna u?\n";
    cout << "mor = ";
    cin >> row1;
    cout << "bagana = ";
    cin >> col1;
    Matrix mat2(row1, col1);
    mat2.garaasUtgaAwah();
    mat2.print();

    cout << "2 matrix-iin niilber ";
    if (row == row1 && row == col1)
    {
        Matrix add = mat1 + mat2;
        add.print();
    }
    else
        error();

    cout << "Matrix deer nemeh butarhai too oruul = ";
    cin >> k;

    cout << "Matrix +  " << k << " = ";
    Matrix addf = mat1 + k;
    addf.print();

    cout << "Matrix-iin urjver ";
    Matrix multiply = mat1 * mat2;
    multiply.print();

    cout << "Matrix-iin ylgavar " << endl;
    if (row == row1 && row == col1)
    {
        Matrix minus = mat1 - mat2;
        minus.print();
    }
    else
        error();

    cout << "Matrix: (++)" << endl;
    ++mat1;
    mat1.print();

    cout << "Matrix: (--)" << endl;
    --mat1;
    mat1.print();

    cout << "Matrix: (+=)" << endl;
    mat1 += mat2;
    mat1.print();

    cout << "Matrix: (-=)" << endl;
    mat1 -= mat2;
    mat1.print();

    cout << "Matrix: (*=)" << endl;
    mat2 *= mat1;
    mat2.print();

    cout << "Matrix: (=)" << endl;
    Matrix &equal = mat1;
    equal.print();

    cout << "haih nud = ";
    cin >> aaa;
    if (aaa > row1 && aaa < 0)
    {
        cout << aaa << " nud hooson\n";
    }
    int bb = mat1[aaa];
    cout << "[" << aaa << "]"
         << "[" << aaa << "]"
         << " = " << bb << "\n";

    // cout << "Matrix : hurvusun" << endl;
    // mat1 = -mat2;
    // mat1.print();

    cout << "\n programm end";
    return 0;
}
