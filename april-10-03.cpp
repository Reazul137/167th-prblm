#include<iostream>
using namespace std;
int main()
{
    float ar, peri, width, height = 0;

    cout << "\n\n Print the area and perimeter of a rectangle : \n";
    cout << "---------------------------------------------------\n";

    cout << " Input the width of a rectangle : ";
    cin >> width ;

    cout << " Input the height of a rectangle : ";
    cin >> height;

    peri = 2 * (width + height );
    ar = height * width ;

    cout << " The area of a rectangle is "<<ar<< " The perimeter of a rectangle is " << peri << endl;
    return 0;
}
