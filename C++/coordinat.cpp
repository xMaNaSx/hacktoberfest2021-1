#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.1415926
class Polar; // Forward declaration

class Rectangular {
    private:
        float x, y;

    public:
        Rectangular() {} // default constructor
        Rectangular(float mv_x, float mv_y) {
            x = mv_x;
            y = mv_y;
        }

        void showData() const;
        Polar rect_to_pol();
        float& get_x() {
            return x;
        }

        float& get_y() {
            return y;
        }

};

void Rectangular::showData() const {
    cout << "--Rectangular--" << endl;
    cout << "x: " << x << "\t" <<"y: " << y << endl;
}




class Polar {
    private:
        float r;
        float theta;
    public:
        Polar() {} // default constructor
        Polar(float mv_r, float mv_theta) {
            r = mv_r;
            theta = mv_theta;
        }
        void showData();
        Rectangular pol_to_rect();
        float& get_r(){
            return r;
        }
        float& get_theta() {
            return theta;
        }

};

void Polar::showData() {
    cout << "--Polar--" << endl;
    cout << "r:" << r << "\t" << "Theta(Radians):" << theta << endl;
}

Rectangular Polar::pol_to_rect() {
    Rectangular temp;
    temp.get_x() = r * cos(theta*(PI/180.0)); // in degrees
    temp.get_y() = r * sin(theta*(PI/180.0));
    return temp;

}

Polar Rectangular::rect_to_pol() {
    Polar temp;

    temp.get_r() = sqrt(pow(x, 2) + pow(y, 2));
    temp.get_theta() = atan2(y, x);
    return temp;
}

int main()
{
    Rectangular r1(-1, -1), r2;
    Polar p1(12.0, 30.0), p2;
    r1.showData();
    p2 = r1.rect_to_pol();
    cout << "After Conversion (RECT TO POLAR)->" << endl;
    p2.showData();

    p1.showData();
    r2 = p1.pol_to_rect();
    cout << "After Conversion (POLAR TO RECT)" << endl;
    r2.showData();
    return 0;
}