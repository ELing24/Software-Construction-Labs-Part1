#include <iostream>
#include <string.h>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"
using namespace std;
bool check(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string shape = "";
    cout << "Enter 1 for area of rectangle or 2 for area triangle: ";
    char choice;
    cin >> choice;
    bool isinValid = true;
    while(isinValid)
    {
        if(choice == '1'){
            isinValid = false;
            string height;
            string width;
            bool isTrue1 = true;
            while(isTrue1){
                cout << "Enter height: ";
                cin >> height;
                if(check(height))
                {
                    isTrue1 = false;
                }
                else
                {
                    cout << "Invalid Input, Try Again: " << endl;
                }
            }
            cout << endl;
            isTrue1 = true;
            while(isTrue1)
            {
                cout << "Enter width: ";
                cin >> width;
                if(check(width))
                {
                    isTrue1 = false;
                }
                else
                {
                    cout << "Invalid Input, Try Again: " << endl;
                }
            }
            cout << endl;
            Rectangle rect;
            rect.set_width(stoi(width));
            rect.set_height(stoi(height));
            cout << "Area of Rectangle: " << rect.area() << endl;


        } else if(choice == '2'){ 
            isinValid = false;
            string height;
            string base;
            bool isTrue2 = true;
            while(isTrue2)
            {
                cout << "Enter height: ";
                cin >> height;
                if(check(height))
                {
                    isTrue2 = false;
                }
                else
                {
                    cout << "Invalid Input, Try Again: " << endl;
                }
                
            }
            cout << endl;
            isTrue2 = true;
            while(isTrue2)
            {
                cout << "Enter Base: ";
                cin >> base;
                if(check(base))
                {
                    isTrue2 = false;
                }
                else
                {
                    cout << "Invalid Input, Try Again: " << endl;
                }
            }
            cout << endl;

            Triangle tri;
            tri.set_base(stod(base));
            tri.set_height(stod(height));
            cout << "Area of Triangle: " << tri.area() << endl;
        } else
        {
            cout << "Invalid Option (Please Enter 1 or 2): " << endl;
            cin >> choice;
        }
    }
    return 0;
}
