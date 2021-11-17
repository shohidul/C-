#include <iostream>

using namespace std;

class fruit
{
    private:
        string taste;

    public:
        void setdetails(string t)
        {
            taste=t;
        }

        void display()
        {
            cout<<"Taste:"<<taste<<endl;
        }
};

int main()
{
    fruit mango; // mango is an object
    mango.setdetails("Sweet and Sour");
    mango.display();

    fruit apple;
    apple.setdetails("Sweet");
    apple.display();
}
