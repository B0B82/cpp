#include "Point.h"

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {};

    double Point::getX() const {
        return this->x;
    }

    double Point::getY() const {
        return this->y;
    }

    void Point::setX(double value) {
        this->x = value;
    }

    void Point::setY(double value) {
        this->y = value;
    }

    double Point::distance(const Point& other) const {
        return hypot(other.x - this->x, other.y - this->y);
    }

    bool Point::operator==(const Point& other) const {
        return this->x == other.x && this->y == other.y;
    }

    bool Point::operator!=(const Point& other) const {
        return this->x != other.x && this->y != other.y;
    }

    std::ostream& operator<<(std::ostream& out, const Point& other) {
        return out << "(" << other.getX() << ", " << other.getY() << ")";
    }
