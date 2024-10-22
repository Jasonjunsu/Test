#include <initializer_list>
#include <iostream>
class A{
private:
    int i;
public:
    A() {
        std::cout << "default constructor is called" << std::endl;
        i = 0;
    }

    A(const A& obj) {
        std::cout << "copy constructor is called" << std::endl;
        i = obj.i;
    }

    A& operator = (const A& obj) {
        std::cout << "assignment constructor is called" << std::endl;
        i = obj.i;
        return *this;
    }

    A (const std::initializer_list<int>& l) {
        std::cout << "initializer_list constructor is called" << std::endl;
        i = *(l.begin());
    }
};

int main() {
    A a;
    A b(a);
    A c = a;
    A d = {1, 2};
    A e({1, 2});
    c = e;
    return 0;
}