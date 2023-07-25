#include<iostream>
#include<math.h>
using namespace std;

class Point{
private:
    float x1,y1;

    Point(float x, float y){
        x1 = x;
        y1 = y;
    }
public:
    static Point Polar(float, float);

    static Point Rectangular(float, float);
    void display();
};

void Point::display(){
    cout<< " x : " << this->x1 << endl;
    cout<< " y : " << this->y1 << endl;

}

Point Point :: Polar(float x, float y){
    return Point(x*cos(y), x*sin(y));
}

Point Point :: Rectangular(float x, float y){
    return Point(x,y);
}

int main(){
    Point pp = Point::Polar(5.7,1.2);

    cout<<"Polar Coordinates\n";

    pp.display();

    Point pr = Point::Rectangular(5.7,1.2);
    cout<<"Rectangular Coordinates\n";

    pr.display();

    return 0;
}




