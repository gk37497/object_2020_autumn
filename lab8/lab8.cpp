#include <iostream>
#include <math.h>
using namespace std;
int aaaa = 0;
class shape
{
protected:
    char *name;

public:
    shape();
    ~shape();
};

shape::shape()
{
    name = new char[10];
    strcpy(name, " ");
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
    float Talbai;

public:
    int talbaiOloh();
    _2dshape();
    ~_2dshape();
    int arr[10];
    int erembe;
    void erembeleh();
    void printAreas();
};

void _2dshape::erembeleh()
{
    for (int i = 0; i < aaaa; i++)
    {
        cout << arr[i] << "\n";
    }
}
void _2dshape::printAreas()
{
    for (int i = 0; i <= erembe; i++)
    {
        cout << " talbai = " << arr[i] << "\n";
    }
}
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
    double urtOloh();
    double cArea();
    void utgaAvah();
    void set_r(int);
    int get_r();
    void set_x_o(int);
    int get_x_o();
    void set_y_o(int);
    int get_y_o();
    void set_name(char *);
    char *get_name();
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
double circle ::urtOloh()
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
double circle ::cArea()
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
    void talbaiOloh();
    square();
    ~square();
    double sArea();
    void sUtgaAvah();
    int sPerimeter();
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
int square ::sPerimeter()
{
    this->Perimeter = this->Taliin_urt * 4;
    return (this->Perimeter);
}
void square::sUtgaAvah()
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
double square ::sArea()
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
class triangle : _2dshape
{
private:
    float h;
    int x1, y1, x2, y2, x3, y3;

public:
    triangle();
    ~triangle();
    void tUtgaaAvah();
    double tArea();
    int tPerimeter();
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
void triangle ::tUtgaaAvah()
{
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
int triangle ::tPerimeter()
{
    this->Perimeter = this->Taliin_urt * 3;
    return (this->Perimeter);
}
double triangle::tArea()
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
    _2dshape *haha;

    int n;
    int numberOfcircle, numberOfsquare, numberOftriangle, numberOfshape;
    // cout << "niit heden durs oruulah ve = ";
    // cin >> numberOfshape;
    // _2dshape *shape[numberOfshape];
    cout << "Heden circle uusgeh ve ?  = ";
    cin >> numberOfcircle;
    cout << "\n";
    circle *c[numberOfcircle];
    for (int i = 0; i < numberOfcircle; i++)
        c[i] = new circle;
    cout << "Heden square uusgeh ve ?  = ";
    cin >> numberOfsquare;
    cout << "\n";
    square *s[numberOfsquare];
    for (int i = 0; i < numberOfsquare; i++)
        s[i] = new square;
    cout << "Heden triangle uusgeh ve ?  = ";
    cin >> numberOftriangle;
    cout << "\n";
    triangle *t[numberOftriangle];
    for (int i = 0; i < numberOftriangle; i++)
        t[i] = new triangle;
    while (n != 6)
    {
        heading();
        cin >> n;

        switch ((n))
        {
        case 1:
            int k;
            for (int i = 0; i < numberOfcircle; i++)
            {
                cout << i + 1 << " r "
                     << "toirgiin medeelelee oruulna uu \n";
                c[i]->utgaAvah();
            }
            while (k != 4)
            {
                cout << "\n\n1.Talbai oloh   2 Perimeter oloh   3.Medeelel harah  4.exit\n"
                     << "*************************************************************\n";
                cin >> k;
                switch (k)
                {
                case 1:
                    for (int i = 0; i < numberOfcircle; i++)
                    {
                        haha->arr[aaaa] = c[i]->cArea();
                        aaaa++;
                        cout
                            << i + 1 << " r Toirgiin talbai = " << c[i]->cArea() << "\n";
                    }
                    break;
                case 2:
                    for (int i = 0; i < numberOfcircle; i++)
                        cout << i + 1 << " r Toirgiin perimeter = " << c[i]->urtOloh() << "\n";
                    break;
                case 3:
                    for (int i = 0; i < numberOfcircle; i++)
                    {
                        cout << i + 1 << "r toirgiin";
                        c[i]->medeelel();
                    }
                    // cout << i + 1 << " r Toirgiin medeelel = " << c[i]->medeelel() << "\n";
                    break;
                default:
                    break;
                }
            }

            break;
        case 2:
            int l;
            for (int i = 0; i < numberOfsquare; i++)
            {
                cout << i + 1 << " r "
                     << "kvadratiin medeelelee oruulna uu \n";
                s[i]->sUtgaAvah();
            }
            while (l != 4)
            {
                cout << "1.Talbai Oloh   2. Perimeter oloh  3. Medeelel harah 4.exit\n"
                     << "*************************************************************\n";
                cin >> l;
                switch (l)
                {
                case 1:
                    for (int i = 0; i < numberOfsquare; i++)
                    {
                        haha->arr[aaaa] = s[i]->sArea();
                        aaaa++;
                        cout << i + 1 << " -r Kvadratiin talbai = " << s[i]->sArea() << "\n";
                    }
                    break;
                case 2:
                    for (int i = 0; i < numberOfsquare; i++)
                        cout << i + 1 << " -r Kvadratiin perimeter = " << s[i]->sPerimeter() << "\n";
                    break;
                case 3:
                    for (int i = 0; i < numberOfsquare; i++)
                    {
                        cout << i + 1 << "-r dursiin medeelel\n";
                        s[i]->medeelel();
                    }
                    break;
                default:
                    break;
                }
            }
            break;
        case 3:
            for (int i = 0; i < numberOftriangle; i++)
            {
                cout << i + 1 << " r "
                     << "gurvaljnii medeelelee oruulna uu \n";
                t[i]->tUtgaaAvah();
            }
            int q;
            while (q != 4)
            {
                cout << "1.Talbai Oloh   2.Perimeter oloh  3.Dursiin medeelel 4.exit\n"
                     << "************************************************************\n";
                cin >> q;
                switch (q)
                {
                case 1:
                    for (int i = 0; i < numberOftriangle; i++)
                    {
                        haha->arr[aaaa] = t[i]->tArea();
                        aaaa++;
                        cout << i + 1 << " r Gurvaljnii talbai = " << t[i]->tArea() << "\n";
                    }
                    break;
                case 2:
                    for (int i = 0; i < numberOftriangle; i++)
                        cout << i + 1 << " r Gurvaljnii perimeter = " << t[i]->tPerimeter() << "\n";
                    break;
                case 3:
                    //dursiin medeelel
                    for (int i = 0; i < numberOftriangle; i++)
                    {
                        cout << i + 1 << "-r gurvaljnii medeelel\n";
                        t[i]->medeelel();
                    }
                    break;
                default:
                    break;
                }
            }
            break;
        case 4:
            cout << "Dursuudiin talbai\n";
            for (int i = 0; i < numberOfcircle; i++)
            {
                cout << "circle " << i + 1 << " :";
                cout << c[i]->cArea() << "\n";
            }
            for (int i = 0; i < numberOfsquare; i++)
            {
                cout << "square " << i + 1 << " :";
                cout << s[i]->sArea() << "\n";
            }
            for (int i = 0; i < numberOftriangle; i++)
            {
                cout << "triangle " << i + 1 << " :";
                cout << t[i]->tArea() << "\n";
            }
            break;
        case 5:
            haha->erembeleh();
            break;
        default:
            return 0;
        }
    }

    return 0;
}
