#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len = 1.0, double wid = 1.0) {
        length = len;
        width = wid;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    double calculateArea() {
        return length * width;
    }

    double calculateDiagonal() {
        return sqrt(length * length + width * width);
    }

    double calculateAngleWithLength() {
        double diagonal = calculateDiagonal();
        double angle = atan(width / length) * 180.0 / M_PI;
        return angle;
    }

    void setDimensions(double newLength, double newWidth) {
        if (newLength >= 1.0 && newLength < 20.0 && newWidth >= 1.0 && newWidth < 20.0) {
            length = newLength;
            width = newWidth;
            cout << "Dimensions set successfully." << endl;
        } else {
            cout << "Invalid width and/or length. Dimensions not set." << endl;
        }
    }

    pair<double, double> getDimensions() {
        return make_pair(length, width);
    }
};

int main() {
    Rectangle rectangle;
    
    double newLength, newWidth;
    cout << "Enter new Length and Width: ";
    cin >> newLength >> newWidth;
    
    rectangle.setDimensions(newLength, newWidth);
    
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    
    auto dimensions = rectangle.getDimensions();
    cout << "Current Length: " << dimensions.first << endl;
    cout << "Current Width: " << dimensions.second << endl;
    
    cout << "Diagonal: " << rectangle.calculateDiagonal() << endl;
    cout << "Angle with Length: " << rectangle.calculateAngleWithLength() << " degrees" << endl;

    return 0;
}
