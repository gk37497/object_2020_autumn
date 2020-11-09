#include <iostream>
#include <math.h>
using namespace std;
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
    circle();
    ~circle();
};
circle::circle()
{
    strcpy(name, "circle");
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
    void printCoordinate();
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
    cout << "a_y = ";
    cin >> a_y;
}
double square ::sArea()
{
    this->Talbai = this->Taliin_urt * this->Taliin_urt;
    return (this->Talbai);
}
void square::coordinate()
{
    b_x = a_x + this->Taliin_urt;
    b_y = b_x;
    c_x = b_x;
    c_y = b_y - this->Taliin_urt;
    d_x = a_x;
    d_y = a_y - this->Taliin_urt;
}
void square::printCoordinate()
{
    cout << "Ene dursiin ner = " << this->name << "\n";
    cout << "4 untsgiin coordinate : ";
    cout << "(" << a_x << "," << a_y << ") "
         << "(" << b_x << "," << b_y << ") "
         << "(" << c_x << "," << c_y << ") "
         << "(" << d_x << "," << d_y << ") \n";
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
    cout << "y2  =";
    cin >> y2;
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
void triangle ::coordinate()
{
    h = this->Taliin_urt * sqrt(3) / 2;
    x2 = x1 + this->Taliin_urt / 2;
    y2 = y1 - h;
    x3 = x2 - this->Taliin_urt;
    y3 = y2;
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
void heading()
{
    cout << "\n\n****************************************\n"
         << "1.Circle    2.Square  3.Triangle  4.Exit \n"
         << "****************************************\n\n";
}
int main()
{
    int n;
    while (n != 4)
    {
        heading();
        cin >> n;
        switch ((n))
        {
        case 1:
            circle *c;
            int k;
            c = new circle;
            c->utgaAvah();
            while (k != 4)
            {
                cout << "\n***************************************************\n"
                     << "1.Talbai Oloh 2. Urt oloh 3.Dursiin medeelel 4.exit\n"
                     << "*****************************************************\n";
                cin >> k;
                switch (k)
                {
                case 1:
                    cout << "Talbai = " << c->cArea() << "\n";
                    break;
                case 2:
                    cout << "Urt = " << c->urtOloh() << "\n";
                    break;
                case 3:
                    //dursiin medeelel
                    cout << "Ene durs bol " << c->get_name() << "\n";
                    cout << "Radius = " << c->get_r() << "\n";
                    cout << "Tov tseg( " << c->get_x_o() << "," << c->get_y_o() << ")\n";
                    break;
                default:
                    break;
                }
            }

            break;
        case 2:
            square *s;
            s = new square;
            int l;
            s->sUtgaAvah();
            while (l != 4)
            {
                cout << "\n*************************************************************\n"
                     << "1.Talbai Oloh   2. Perimeter oloh  3. Dursiin medeelel 4.exit\n"
                     << "*************************************************************\n";
                cin >> l;
                switch (l)
                {
                case 1:
                    cout << "Talbai = " << s->sArea()
                         << "\n";
                    break;
                case 2:
                    cout << "Perimetr = " << s->sPerimeter()
                         << "\n";
                    break;
                case 3:
                    //dursiin medeelel
                    s->coordinate();
                    s->printCoordinate();
                    break;
                default:
                    break;
                }
            }
            break;
        case 3:
            triangle *t;
            t = new triangle;
            t->tUtgaaAvah();
            int q;
            while (q != 4)
            {
                cout << "\n************************************************************\n"
                     << "1.Talbai Oloh   2.Perimeter oloh  3.Dursiin medeelel 4.exit\n"
                     << "************************************************************\n";
                cin >> q;
                switch (q)
                {
                case 1:
                    cout << "Talbai = " << t->tArea() << "\n";
                    break;
                case 2:
                    cout << "Perimeter = " << t->tPerimeter() << "\n";
                    break;
                case 3:
                    //dursiin medeelel
                    t->coordinate();
                    t->printCoordinate();
                    break;
                default:
                    break;
                }
            }
            break;
        default:
            return 0;
        }
    }
    return 0;
}
