#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setData(3, 3);
    cout << "Area of rectangle: " << r.area() << endl;
    return 0;
}

