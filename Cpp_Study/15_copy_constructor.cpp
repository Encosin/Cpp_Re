#include<iostream>
using namespace std;
// 복사 생성자

class Point {
    int x, y;

public:
    // Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
    Point(const Point& rhs) : x(rhs.x), y(rhs.y) {
        cout << "Point" << endl;
    }


/* 사용자가 복사 생성자만 제공할 경우,
=> 컴파일러는 기본 생성자를 제공하지 않습니다.
사용자가 생성자를 제공하지 않으면,
=> 컴파일러는 기본 생성자와 복사 생성자를 제공합니다.*/
    void Print() {
        cout << x << ", " << y << endl;
    }
};

// 컴파일러를 사용자가 제공하지 않으면, 아래 모양의 '복사 생성자' 를 제공합니다.
// // Poing(const, Point&)
// => 모든 멤버 데이터를 복사하는 형태로 동작합니다.

int main()
{
    Point p1;
    Point p2(10, 20);
    Point p3(p2);

    p2.Print();
    p3.Print();
} 


