#include <iostream>
using namespace std;
/*
class LearningStatic
{
    public:
        int apple;
        const static int ball = 9;

};

int main()
{
    LearningStatic obj1;
    obj1.apple = 2;
    cout << obj1.apple << " " << LearningStatic::ball << endl;

    LearningStatic obj2;
    obj2.apple = 7;
    cout << obj2.apple << " " << LearningStatic::ball << endl;
}
*/

/*
class Widget
{
    public:
        Widget() { ++count;};
        ~Widget() { --count;};
        static int count;
};
int Widget::count = 0;

int main()
{
    Widget w, x;
    cout << "Now there are " << Widget::count << " widgets.\n" << endl;

    {
        Widget w, x, y, z;
        cout << "Now there are " << Widget::count << " widgets.\n" << endl;
    }

    cout << "Now there are " << Widget::count << " widgets.\n" << endl;
    Widget y;
    cout << "Now there are " << Widget::count << " widgets.\n" << endl;
}*/

class myclass
{
    static int x;

public:
    static int y;
    int getX() {return x;}
    void setX(int x)
    {
        myclass::x = x;
    }
};
int myclass::x = 1;
int myclass::y = 2;

int main ()
{
    myclass ob1, ob2;
    cout << ob1.getX() << endl; // 1

    ob2.setX(5);
    cout << ob1.getX() << endl; // 5
    cout << ob1.y << endl; // 2

    myclass::y = 10;
    cout << ob2.y << endl; // 10

    //myclass::x = 100;

// will produce compiler error

}
