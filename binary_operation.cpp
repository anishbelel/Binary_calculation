#include <iostream>
#include <string>
using namespace std;

typedef class binary
{
private:
    int a;
    string s;

public:
    void input();
    void check();
    void display1();
    void reverse();
    void complement();
    void display2();

} b;

void b ::input()
{
    cout << "Enter the binary number ";
    cin >> s;
};

void b::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Your input is not a binary number" << endl;
            a = 9;
            break;
        }
    }
};

void b::display1()
{
    if (a == 9)
    {
        return;
    }
    else
    {
        cout << "Your entered binary number is ";
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    }
}

void b::reverse()
{
    if (a == 9)
    {
        return;
    }
    else
    {
        cout << "The binary number in the reverse order is ";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            cout << s.at(i);
        }
    }
}

void binary ::complement()
{
    if (a == 9)
    {
        return;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }
}
void binary ::display2()
{
    if (a == 9)
    {
        return;
    }
    else
    {
        cout << "Displaying the complement of your binary number ";
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    }
}

int main()
{
    binary one,two,three;
    one.input();
    one.check();
    one.display1();
    cout << endl;
    one.reverse();
    one.complement();
    cout << endl;
    one.display2();

    cout << endl
         << endl; // ((second function will be executed when the first will be binary)) -> This
                // limitaion is no longer present

    //binary two;
    two.input();
    two.check();
    two.display1();
    cout << endl;
    two.reverse();
    two.complement();
    cout << endl;
    two.display2();

    cout << endl
         << endl;


    three.input();
    three.check();
    three.display1();
    cout << endl;
    three.reverse();
    three.complement();
    cout << endl;
    three.display2();

    return 0;
}