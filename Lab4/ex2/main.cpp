#include "functii.h"

int main()
{
    Stiva s;
    s.push(4);
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    s.push(9);
    cout << s.top() << endl;
    s.pop();
    s.push(2);
    cout << s.top() << endl;
    s.print();
}