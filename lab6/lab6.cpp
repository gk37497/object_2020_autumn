#include <iostream>
using namespace std;
class shape
{
private:
public:
    shape();
    ~shape();
};

shape::shape()
{
}

shape::~shape()
{
}
//2dshape class ------------------------
class _2dshape : public shape
{
private:
public:
    _2dshape();
    ~_2dshape();
};

_2dshape::_2dshape()
{
}

_2dshape::~_2dshape()
{
}
//circle class
class circle : public _2dshape
{
private:
    int a, b, r;
    char *name;

public:
    void talbaiOloh();
    void urtOloh();
    circle();
    ~circle();
};

circle::circle()
{
}

circle::~circle()
{
}
//square class
class square : public _2dshape
{
private:
    int a, b;
    int l;

public:
    void talbaiOloh();
    square();
    ~square();
};

square::square()
{
}

square::~square()
{
}
//triangle class
class triangle : _2dshape
{
private:
public:
    triangle();
    ~triangle();
};

triangle::triangle()
{
}

triangle::~triangle()
{
}
