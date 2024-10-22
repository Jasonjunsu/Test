#include <iostream>
#include <ostream>
#include <map>
struct Point {
    int x;
    int y;
    Point(int _x, int _y):x(_x), y(_y) {}
};

struct PointCompare {
    bool operator () (const Point& lhs, const Point& rhs) const {
        return lhs.x != rhs.x ? lhs.x < rhs.x : lhs.y < rhs.y;
    }
};

std::ostream& operator << (std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

void print_map(const std::map<int, int>& m) {
    for(const auto& t:m) {
        std::cout << "(" << t.first << ", " << t.second << ")" << " ";
    }
    std::cout << std::endl;
}

void test_map(){
    std::map<int, int> m;
    m[0] = 1;
    m[1] = 2;
    auto ret = m.insert(std::pair<int, int>(3, 4));
    print_map(m);
    if (!ret.second) {
        std::cout << "insert failed" << std::endl;
    }
    m.erase(3);
    print_map(m);
    auto find_ret = m.find(3);
    if (find_ret == m.end()) {
        std::cout << "find failed" << std::endl;
    }
    std::map<int, int> m1 = {{1,3}, {2, 4}, {1, 5}}; //map key是唯一的
    print_map(m1);
    std::cout << m1[3] << std::endl;


    std::map <Point, int, PointCompare> point_map;
    point_map.insert(std::pair<Point, int>{{1, 2}, 3});
    point_map.insert(std::pair<Point, int>{{2, 3}, 4});
    point_map.insert(std::pair<Point, int>{{1, 3}, 3});

    for(const auto& t:point_map) {
        std::cout << t.first << " " << t.second <<std::endl;
    }
}

int main(int argc, char *argv[]) {
    // Your code here
    test_map();
    return 0;
}