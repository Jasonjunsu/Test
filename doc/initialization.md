# 初始化
初始化有好几种方式，

直接初始化
```
std::vector <int> a(5);
std::vector <int> a(5, 1);
```
采用初始化列表初始化
```
std::vector <int> a({1, 2, 3, 4, 5});
std::vector <int> a = {1, 1, 1, 1, 1};
std::vector <int> a{1, 2, 3, 4, 5};
```