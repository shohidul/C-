#include <iostream>

using namespace std;

class Human{
    private:
        string name;
        string height;
        string gender;
        int age;

    public:
        void setValue(string n, string h, string g, int a)
        {
            name = n;
            height = h;
            gender = g;
            age = a;
        }

        void getValue()
        {
            cout << "Name: " << name << endl;
            cout << "Height: " << height << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << endl;
            cout << endl;
        }
};

int main()
{
    Human adam;
    adam.setValue("Adam AS", "40 Feet", "Male", 940);
    adam.getValue();

    Human eve;
    eve.setValue("Eve AS", "35 Feet", "Female", 1000);
    eve.getValue();
}
