#include <iostream> 
#include <cstring>

using namespace std;

int main() {
    char* input = new char[50];
    int i = 42; 
    cin.getline(input, 50);
    for (i = strlen(input); i >= 0; i--) { 
        cout << input[i];
    }
    cout << endl; 
    delete []input;
    return 0;
}