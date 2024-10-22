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
    a.push_back(6);
    a.emplace_back(7);
    std::cout << a.back() << std::endl; // 7
    std::cout << a.at(1) << std::endl; //2
    std::cout << a.front() << std::endl; // 1
    print_vector(a);  // 1 2 3 4 5 6 7
    std::cout << *(a.insert(a.begin()+2, 1)) << std::endl; //1
    print_vector(a); // 1 2 1 3 4 5 6 7
    std::cout << *(a.erase(a.begin() + 2)) << std::endl; // 3
    print_vector(a); // 1 2 3 4 5 6 7
}

int main() {
    test_vector();
}