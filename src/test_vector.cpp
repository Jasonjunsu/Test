#include<vector>
#include<iostream>

void print_vector(const std::vector<int>& v) {
    std::cout << "the size of v is: " << v.size() << std::endl;
    for(const auto& i:v) {
        std::cout << i  << " ";
    }
    std::cout << std::endl;
}

void test_vector() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b{1, 2, 3, 4, 5};
    std::vector<int> c(5, 1);
    std::vector<int> d(6);
    print_vector(a);
    print_vector(b);
    print_vector(c);
    print_vector(d);
}

int main() {
    test_vector();
}