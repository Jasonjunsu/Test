#include <iostream>
#include <set>

void test_set() {
    std::set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);

    s.erase(1);
    std::cout << s.count(1) << std::endl;
    s.erase(1);
    if (s.find(1) == s.end()) {
        std::cout << "find failed" << std::endl;
    }

    for(const auto& e:s) {
        std::cout << e << std::endl;
    }
}

int main(int argc, char *argv[]) {
    // Your code here
    test_set();
    return 0;
}