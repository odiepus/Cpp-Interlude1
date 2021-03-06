#include <iostream>
#include <string>
#include "Plainbox.h"
#include "ToyBox.h"
#include "MagicBox.h"

using namespace std;

int main()
{
    string x = "ball";

    Plainbox<string> box1;

    box1.setItem(x);

    cout << box1.getItem() << endl;


    string y = "block";
    ToyBox<string> box2(y, RED);

    cout << box2.getItem() << " " << box2.getColor() << endl;

    string z = "one";

    MagicBox<string> box3;

    box3.setItem(z);


    cout << box3.getItem() << endl;

    return 0;
}
