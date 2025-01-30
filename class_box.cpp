#include <iostream>
using namespace std;

template<class B>
class Box {
private:
    B var;
public:
    // Default constructor
    Box() : var(0) {} // Initializes var to 0 (or default value of B)

    // Parameterized constructor
    Box(B anl) {
        var = anl;
    }

    // Function to set the value of var
    void setVar(B value) {
        var = value;
    }

    // Function to take input for var
    void inputVar() {
        cout << "Enter value: ";
        cin >> var;
    }

    // Function to display the value of var
    void display() const {
        cout << "Value: " << var << endl;
    }
};

int main() {
    Box<int> var(12);// Default constructor
     var.display();   
    var.inputVar(); // Take input for var
    var.display();  // Display the value of var
    
    var.setVar(42); // Set a new value
    var.display();  // Display the updated value

    return 0;
}
