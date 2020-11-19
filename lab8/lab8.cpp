#include <iostream>
#include <math.h>
using namespace std;
int aaaa = 0;
class shape
{
protected:
    char *name;

public:
    virtual double perimeter() = 0;
    shape();
    ~shape();
    char *getname();
};

shape::shape()
{
    name = new char[10];
    strcpy(name, " ");
}
char *shape::getname()
{
    return name;
}
shape::~shape()
{
    delete name;
}
//2dshape class ------------------------
class _2dshape : public shape
{
protected:
    int Perimeter, Taliin_urt;

public:
    virtual double talbaiOloh() = 0;
    virtual void utgaAvah() = 0;
    virtual void medeelel() = 0;
    _2dshape();
    ~_2dshape();
};

_2dshape::_2dshape()
{
}

_2dshape::~_2dshape()
{
    cout << "object deleted!!!!!\n";
}
//circle class
class circle : public _2dshape
{
private:
    int r;
    int x_o, y_o;

public:
    double perimeter();
    double talbaiOloh();
    void utgaAvah();
    void set_r(int);
    int get_r();
    void set_x_o(int);
    int get_x_o();
    void set_y_o(int);
    int get_y_o();
    char *get_name();
    void set_name(char *);
    void medeelel();
    circle();
    ~circle();
};
circle::circle()
{
    strcpy(name, "circle");
}
void circle::medeelel()
{
    cout << "name = " << this->name << "\n";
    cout << "radius = " << get_r() << "\n";
    cout << "Tov tseg = (" << get_x_o() << "," << get_y_o() << ")\n";
}
void circle ::set_r(int r)
{
    this->r = r;
}
int circle ::get_r()
{
    return this->r;
}
void circle ::set_x_o(int x_o)
{
    this->x_o = x_o;
}
int circle ::get_x_o()
{
    return this->x_o;
}
void circle ::set_y_o(int y_o)
{
    this->y_o = y_o;
}
int circle ::get_y_o()
{
    return this->y_o;
}
void circle::set_name(char *name)
{
    this->name = name;
}
char *circle::get_name()
{
    return name;
}
double circle ::perimeter()
{
    return (2 * 3.14 * r);
}
void circle::utgaAvah()
{
    cout << "Tov tseguudiiig oruulna uu !\n";
    cout << "xo = ";
    cin >> x_o;
    set_x_o(x_o);
    cout << "yo = ";
    cin >> y_o;
    set_y_o(y_o);
    cout << "Toirgiin R = ";
    cin >> r;
    set_r(r);
}
double circle ::talbaiOloh()
{
    return (3.14 * r * r);
}
circle::~circle()
{
    delete[] name;
    cout << "object deleted!!!!!\n";
}
//square class
class square : public _2dshape
{
private:
    int a_x, a_y,
        b_x, b_y,
        c_x, c_y,
        d_x, d_y;

public:
    double talbaiOloh();
    square();
    ~square();
    void utgaAvah();
    double perimeter();
    void coordinate();
    void medeelel();
    int get_a_x();
    int get_a_y();
    int get_b_x();
    int get_b_y();
    int get_c_x();
    int get_c_y();
    int get_d_x();
    int get_d_y();
    void set_a_x(int a_x);
    void set_a_y(int a_y);
    void set_b_x(int b_x);
    void set_b_y(int b_y);
    void set_c_x(int c_x);
    void set_c_y(int c_y);
    void set_d_x(int d_x);
    void set_d_y(int d_y);
    void allset();
};

square::square()
{
    strcpy(name, "Square");
    this->Taliin_urt = 0;
}

square::~square()
{
    cout << "object deleted!!!!!\n";
    delete[] name;
}
void square::medeelel()
{
    cout << "Baruun deed : "
         << "(" << get_a_x() << "," << get_a_y() << ")\n";
    cout << "Zuun deed : "
         << "(" << get_b_x() << "," << get_b_y() << ")\n";
    cout << "Baruun dood : "
         << "(" << get_c_x() << "," << get_c_y() << ")\n";
    cout << "Zuun dood : "
         << "(" << get_d_x() << "," << get_d_y() << ")\n";
}
double square ::perimeter()
{
    this->Perimeter = this->Taliin_urt * 4;
    return (this->Perimeter);
}
void square::utgaAvah()
{
    cout << "Taliin urtaa oruulna uu = ";
    cin >> this->Taliin_urt;
    cout << "Zuun deed oroin koordinat oruulna uu ! \n";
    cout << "a_x = ";
    cin >> a_x;
    set_a_x(a_x);
    cout << "a_y = ";
    cin >> a_y;
    set_a_y(a_y);
}
double square ::talbaiOloh()
{
    this->Talbai = this->Taliin_urt * this->Taliin_urt;
    return (this->Talbai);
}
int square::get_a_x()
{
    return this->a_x;
}
void square::set_a_x(int a_x)
{
    this->a_x = a_x;
}
int square::get_a_y()
{
    return this->a_y;
}
void square::set_a_y(int a_y)
{
    this->a_y = a_y;
}
int square::get_b_x()
{
    return this->b_x;
}
void square::set_b_x(int b_x)
{
    this->b_x = b_x;
}
int square::get_b_y()
{
    return this->b_y;
}
void square::set_c_x(int c_x)
{
    this->c_x = c_x;
}
int square::get_c_x()
{
    return this->c_x;
}
void square::set_c_y(int c_y)
{
    this->c_y = c_y;
}
int square::get_c_y()
{
    return this->c_y;
}
void square::set_d_x(int d_x)
{
    this->d_x = d_x;
}
int square::get_d_x()
{
    return this->d_x;
}
void square::set_d_y(int d_y)
{
    this->d_y = d_y;
}
int square::get_d_y()
{
    return this->d_y;
}
// void square::allset()
// {
//     set_d_x(d_x);
//     set_d_y(d_y);
//     set_b_x(b_x);
//     set_c_x(c_x);
//     set_b_y(b_y);
//     set_c_y(c_y);
// }
void square::coordinate()
{
    b_x = a_x + this->Taliin_urt;
    b_y = b_x;
    c_x = b_x;
    c_y = b_y - this->Taliin_urt;
    d_x = a_x;
    d_y = a_y - this->Taliin_urt;
}

//triangle class
class triangle : public _2dshape
{
private:
    float h;
    int x1, y1, x2, y2, x3, y3;

public:
    triangle();
    ~triangle();
    void utgaAvah();
    double talbaiOloh();
    double perimeter();
    void coordinate();
    void printCoordinate();
    void medeelel();
    int get_h();
    void set_h(int h);
    int get_x1();
    int get_y1();
    int get_x2();
    int get_y2();
    int get_x3();
    int get_y3();
    void set_x1(int x1);
    void set_y1(int y1);
    void set_x2(int x2);
    void set_y2(int y2);
    void set_x3(int x3);
    void set_y3(int y3);
};

triangle::triangle()
{
    strcpy(name, "Triangle");
}

triangle::~triangle()
{
    cout << "object deleted!!!!!\n";
    delete[] name;
}
void triangle ::utgaAvah()
{
    cout << "Gurvaljnii medeellee oruulna uu\n";
    cout << "Taliin urtaa oruulna uu = ";
    cin >> this->Taliin_urt;
    cout << "Oroin tseguudiig orulna uu\n";
    cout << "x1  =";
    cin >> x1;
    set_x1(x1);
    cout << "y1  =";
    cin >> y1;
    set_y1(y1);
}
double triangle ::perimeter()
{
    this->Perimeter = this->Taliin_urt * 3;
    return (this->Perimeter);
}
double triangle::talbaiOloh()
{
    this->Talbai = this->Taliin_urt * this->Taliin_urt * sqrt(3) / 4;
    return (this->Talbai);
}
void triangle ::set_h(int h)
{
    this->h = h;
}
int triangle::get_h()
{
    return this->h;
}
void triangle::printCoordinate()
{
    cout << "Ene dursiin ner " << this->name << "\n";
    cout << "Coordinate : ";
    cout << "(" << x1 << "," << y1 << ") "
         << "(" << x2 << "," << y2 << ") "
         << "(" << x3 << "," << y3 << ") \n";
    cout << "Undur = " << h << "\n";
}
void triangle::set_x1(int x1)
{
    this->x1 = x1;
}
void triangle::set_y1(int y1)
{
    this->y1 = y1;
}
void triangle::set_x2(int x2)
{
    this->x2 = x2;
}
void triangle::set_y2(int y2)
{
    this->y2 = y2;
}
void triangle::set_x3(int x3)
{
    this->x3 = x3;
}
void triangle::set_y3(int y3)
{
    this->y3 = y3;
}
int triangle::get_x1()
{
    return this->x1;
}
int triangle::get_y1()
{
    return this->y1;
}
int triangle::get_x2()
{
    return this->x2;
}
int triangle::get_y2()
{
    return this->y2;
}
int triangle::get_x3()
{
    return this->x3;
}
int triangle::get_y3()
{
    return this->y3;
}
void triangle ::coordinate()
{
    h = this->Taliin_urt * sqrt(3) / 2;
    x2 = x1 + this->Taliin_urt / 2;
    set_x2(x1 + this->Taliin_urt / 2);
    y2 = y1 - h;
    set_y2(y1 - h);
    x3 = x2 - this->Taliin_urt;
    set_x3(x3);
    y3 = y2;
    set_y3(y3);
}
void triangle::medeelel()
{
    coordinate();
    cout << "Undur = " << get_h() << "\n";
    cout << "(" << get_x1() << "," << get_y1() << ")\n";
    cout << "(" << get_x2() << "," << get_y2() << ")\n";
    cout << "(" << get_x3() << "," << get_y3() << ")\n";
}
void heading()
{
    cout << "\n\n****************************************\n"
         << "1.Circle    2.Square  3.Triangle  4.Talbaigaar erembeleh  5.Exit \n"
         << "****************************************\n\n";
}
int main()
{
    int n, cir, squ, tri;
    cout << "Heden durs oruulah ve = ";
    cin >> n;
    _2dshape *shap[n];
    while (1)
    {
        cout << "Heden toirog oruulah ve = ";
        cin >> cir;
        if (cir > n)
            cout << "Dursiin too hetersen baina!!! \n";
        else
            break;
    }
    if (cir < n)
    {
        while (1)
        {
            cout << "Heden kavdrat oruulah ve = ";
            cin >> squ;
            if (cir + squ > n)
                cout << "Dursiin too hetersen baina!!!\n";
            else
                break;
        }
    }
    if (cir + squ < n)
    {
        tri = n - cir - squ;
        cout << tri << " gurvaljin uuslee \n"
             << "\n\n";
    }
    int i = 0, j = 0;
    for (i = 0; i < cir; i++)
    {
        shap[i] = new circle;
        cout << "\n"
             << i + 1 << " -r Toirgiin medeellee oruulna uu\n\n";
        shap[i]->utgaAvah();
    }
    for (j = i; j < squ + cir; j++)
    {
        shap[j] = new square;
        cout << j - i + 1 << " -r kvadratiin medeellee oruulna uu\n\n";
        shap[j]->utgaAvah();
    }

    for (int k = j; k < squ + cir + tri; k++)
    {
        shap[k] = new triangle;
        cout << "\n"
             << k - j + 1 << " -r Gurvaljnii medeellee oruulna uu\n\n";
        shap[k]->utgaAvah();
    }
    cout << "Dursuudiin Talbai : \n";
    for (int z = 0; z < n; z++)
    {
        cout << "    "
             << "Durs ";
        cout << z + 1 << "-iin S = " << shap[z]->talbaiOloh();
        cout << " (" << shap[z]->getname() << ")"
             << "\n";
    }
    _2dshape *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (shap[j]->talbaiOloh() > shap[j + 1]->talbaiOloh())
            {
                temp = shap[j];
                shap[j] = shap[j + 1];
                shap[j + 1] = temp;
            }
        }
    }
    cout << "Dursuudiin Perimeter : \n";
    for (int z = 0; z < n; z++)
    {
        cout << "    "
             << "Durs ";
        cout << z + 1 << "-iin P = " << shap[z]->perimeter();
        cout << " (" << shap[z]->getname() << ")" << endl;
    }
    cout << "\n\nErembelegdsen talbai : \n";
    for (int z = 0; z < n; z++)
    {
        cout << "    "
             << "Durs ";
        cout << "-iin S = " << shap[z]->talbaiOloh();
        cout << " (" << shap[z]->getname() << ")" << endl;
    }
    return 0;
}
