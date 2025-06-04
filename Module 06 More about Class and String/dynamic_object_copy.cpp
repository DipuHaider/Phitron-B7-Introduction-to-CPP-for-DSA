#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        int jersey;
        string country;
    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey; 
    } // Constructor to initialize country and jersey
};

int main() {
    
    Cricketer* Dhoni = new Cricketer("India", 100); // Creating a dynamic object
    // Using new to allocate memory for the Cricketer object
    Cricketer* Kohli = new Cricketer("India", 18);

    // Kohli->country =  Dhoni->country;
    // Kohli->jersey = Dhoni->jersey; // Copying values from Dhoni to Kohli  

    //OR

    *Kohli = *Dhoni; // Copying the entire object from Dhoni to Kohli

    cout << Dhoni->country << " " << Dhoni->jersey << endl; // Output: India 100
    cout << Kohli->country << " " << Kohli->jersey << endl; // Output: India 18

    delete Dhoni; // Freeing the memory allocated for Dhoni
    // Kohli still points to the same memory location as Dhoni, so we should not delete Kohli again
    cout << "After deleting Dhoni:" << endl;
    cout << Kohli->country << " " << Kohli->jersey << endl; // Output: India 100
    return 0;
}