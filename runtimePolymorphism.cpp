// RUNTIME POLYMORPHISM INTERVIEW QUESTIONS
// NOT INTUITIVE, LEARN AND PRACTICE!
// BECAUSE THESE OOPS CONCEPTS ARE NOT SUPER INTUITIVE

#include <iostream>

using namespace std;

class base {
    public:
    int a;
    base() {
        a = 5;        
    }
    virtual void show() {
        cout << a << " Base\n";
    }
    void show2() {
        cout << "I'm from base!\n";
    }
};

class derived: public base {
    public:
    int b;
    derived() {
        a = 10;
        b = 17;
    }
    void show() {
        cout << a << " Derived\n";
    }
    void show2() {
        cout << "I'm from Derived\n";
    }
};

int main() {
    
    // COMMENT OUT LINES WHICH WILL THROW ERRORS. 
    // NOTE: ALL ARE COMPILE TIME ERRORS
    // ALSO PREDICT THE OUTPUT OF NON ERROR THROWING LINES
    
    base* a1 = new derived(); //1
    a1->show(); //2
    a1->show2(); //3
    cout << a1->a << '\n';//4
    cout << a1->b << '\n';//5
    
    base* a2 = new base();//6
    a2->show();//7
    a2->show2();//8
    cout << a2->a << '\n';//9
    cout << a2->b << '\n';//10
    
    derived* a3 = new base();//11
    a3->show();//12
    a3->show2();//13
    cout << a3->a << '\n';//14
    cout << a3->b << '\n';//15
    
    derived* a4 = new derived();//16
    a4->show();//17
    a4->show2();//18
    cout << a4->a << '\n';//19
    cout << a4->b << '\n';//20
    
    return 0;
}
