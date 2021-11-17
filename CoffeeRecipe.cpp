#include <iostream>

using namespace std;

class CoffeeRecipe
{
    private:
        int coffee;
        int mate;
        int sugar;
        int water;

    public:
        void setValues(int c, int m, int s, int w)
        {
            coffee = c;
            mate = m;
            sugar = s;
            water = w;
        }

        void getCoffee()
        {
            cout << "Your coffee is in process\n" << endl;

            cout << "Ingredients: " << endl;
            cout << "Coffee: " << coffee << endl;
            cout << "Mate: " << mate << endl;
            cout << "Sugar: " << sugar << endl;
            cout << "Water: " << water <<"\n"<< endl;

            cout << "Your coffee is ready!\n" << endl;
        }
};

int main()
{
    CoffeeRecipe cup1;
    int c;
    cout << "Coffee: ";
    cin >> c;
    int m;
    cout << "Mate: ";
    cin >> m;
    int s;
    cout << "Sugar: ";
    cin >> s;
    int w;
    cout << "Water: ";
    cin >> w;

    cup1.setValues(c, m, s, w);
    cup1.getCoffee();

    CoffeeRecipe cup2;
    cup2.setValues(1, 2, 1, 1);
    cup2.getCoffee();
}
