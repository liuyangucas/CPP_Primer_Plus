#include<iostream>
#include"list.h"
using namespace std;
int main()
{
    List lst;
    char ch;
    double temp;
    cout << "Please enter A to add num, P to process the list, S to show the list, and Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter the value: ";
            cin >> temp;
            if (lst.isfull())
                cout << "list already full.\n";
            else
                lst.add(temp);
            break;
        case 'P':
        case 'p':
            if (lst.isempty())
                cout << "the list is empty. \n";
            else {
                lst.visit(minus1);
                cout << "the list is minus 1.\n";
            }
            break;
        case 'S':
        case 's':
            lst.show();
            break;
        }
        cout << "Please enter A to add num, P to process the list, S to show the list, and Q to quit.\n";
    }
    lst.show();
    cout << "Bye!\n";
    system("pause");
    return 0;
}
