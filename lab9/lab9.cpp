#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define BLUE "\x1b[34m"

template <class T>
class ListX
{
private:
    T data;
    ListX *next;

public:
    ListX()
    {
        next = NULL;
    }
    ListX(T r)
    {
        data = r;
        next = NULL;
    }

    T getData();
    void setData(T t);

    ListX *getNext();
    void setNext(ListX *n);
};

template <class T>
T ListX<T>::getData()
{
    return data;
}

template <class T>
void ListX<T>::setData(T t)
{
    data = t;
}

template <class T>
ListX<T> *ListX<T>::getNext()
{
    return next;
}

template <class T>
void ListX<T>::setNext(ListX *n)
{
    next = n;
}

template <class T>
class LinkedList
{
private:
    ListX<T> *head;
    ListX<T> *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    ~LinkedList() {}
    void add(T t);
    void insert(T t, int index);
    T get(int index);
    void deletee(int index);
    int length();
    void print();
};

template <class T>
int LinkedList<T>::length()
{
    if (head == NULL)
        return 0;
    else
    {
        int count = 0;
        ListX<T> *temp = head;
        while (temp != NULL)
        {
            temp = temp->getNext();
            count++;
        }
        return count;
    }
}

template <class T>
void LinkedList<T>::print()
{
    if (head == NULL)
        cout << "List hooson!!!" << endl;
    else
    {
        ListX<T> *temp = head;
        cout << RED "List : " RESET;
        while (temp->getNext() != NULL)
        {
            cout << temp->getData() << " , ";
            temp = temp->getNext();
        }
        cout << tail->getData();
    }
}

template <class T>
void LinkedList<T>::add(T t)
{

    if (head == NULL)
    {
        head = new ListX<T>;
        head->setData(t);
        tail = head;
    }
    else
    {
        ListX<T> *temp = new ListX<T>;
        temp->setData(t);
        temp->setNext(NULL);
        tail->setNext(temp);
        tail = temp;
    }
}

template <class T>
void LinkedList<T>::insert(T t, int index)
{
    ListX<T> *temp = new ListX<T>;
    temp->setData(t);
    int i, taill = 0;
    if (index != 0 && index > length())
    {
        cout << index << " -r bairlald utga oruulah bolomjgui" << endl;
        return;
    }
    if (head == NULL)
    {
        if (index == 0)
            add(t);
        else
        {
            cout << "List hooson" << index << " -r bairlald utga oruulah bolomjgui" << endl;
        }
    }
    else if (index == 0)
    {
        temp->setNext(head);
        head = temp;
    }
    else if (index == length())
    {
        temp->setNext(NULL);
        tail->setNext(temp);
        tail = temp;
    }
    else
    {
        ListX<T> *pointer = head;
        int counter = 0;
        while (counter != index - 1)
        {
            pointer = pointer->getNext();
            counter++;
        }
        temp->setNext(pointer->getNext());
        pointer->setNext(temp);
    }
}

template <class T>
T LinkedList<T>::get(int index)
{
    if (head == NULL)
    {
        return -1;
    }
    else
    {
        int counter = 0;
        ListX<T> *temp = head;
        while (temp != NULL)
        {
            if (counter == index)
            {
                return temp->getData();
            }
            temp = temp->getNext();
            counter++;
        }
    }
    return -1;
}
template <class T>
void LinkedList<T>::deletee(int index)
{
    int i;
    if (head == NULL)
        cout << "List hooson";
    else if (index == 0)
        head = head->getNext();
    else
    {

        ListX<T> *Elm;
        ListX<T> *temp = head;
        for (i = 0; i < index && temp != NULL; i++)
        {
            if (temp->getNext() != tail)
            {
                Elm = temp;
                temp = temp->getNext();
            }
            else
                break;
        }

        if (i + 1 < index)
        {
            cout << "Ustgah bolomjgui" << endl;
            return;
        }
        if (i + 1 == index)
        {
            temp->setNext(NULL);
            tail = temp;
            return;
        }
        Elm->setNext(temp->getNext());
    }
}

int main()
{
    int n, pos;

    LinkedList<double> a;
    double value;

    while (1)
    {
        cout << "\n***********************************************************************\n"
             << BLUE "1. Add   2. Insert   3. Get   4. Delete   5. Print    6. Length  7.Exit" RESET
             << "\n***********************************************************************\n"
             << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "nemeh utga = ";
            cin >> value;
            a.add(value);
            break;
        case 2:
            cout << "nemeh utga = ";
            cin >> value;
            cout << "nemeh bairlal = ";
            cin >> pos;
            a.insert(value, pos);
            break;
        case 3:
            cout << "Bairlal = ";
            cin >> pos;
            if (a.get(pos) == -1)
                cout << pos << RED " bairlal hooson\n" RESET;
            else
                cout << pos << " bairlal deerh utga : " << BLUE << a.get(pos) << RESET << endl;
            break;
        case 4:
            cout << "ustgah elementiin bairlal = ";
            cin >> pos;
            a.deletee(pos);
            break;
        case 5:
            a.print();
            break;
        case 6:
            cout << RED "Lenght = " RESET << a.length() << endl;
            break;
        default:
            exit(0);
        }
    }

    return 0;
}
