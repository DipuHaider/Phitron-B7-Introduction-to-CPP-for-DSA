#include<iostream>
using namespace std;

int main(){

    int x, y;
    char c;
    double d;
    cin >> x >> y >> c >> d;
    cout << x << " " << y << " " << c << " " << d << endl;

    // Displaying ASCII value of a character
    char f = 'F';
    int acsii = f;
    cout << "ASCII value of '" << f << "' is: " << acsii << endl;
    //by typecasting
    int g = 'G';
    cout << "ASCII value of 'G' is: " << (int)g << endl;
    //ALso 
    int i = 65;
    char ch = (char)i;
    cout << "Character for ASCII value " << i << " is: " << ch << endl;

    return 0;
}

//input
//50 10 t 23.33

// output
// 50 10 t 23.33
// ASCII value of 'F' is: 70
// ASCII value of 'G' is: 71
// Character for ASCII value 65 is: A