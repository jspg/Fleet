#ifndef VECTOR2_H
#define VECTOR2_H

template< class T >
class Vector2
{
public:
    Vector2(const T newX = 0, const T newY = 0)
        : x(newX), y(newY) {}

    T getX() const { return x; }
    T getY() const { return y; }

    void setX(const T newX) { x = newX; }
    void setY(const T newY) { y = newY; }
    void setVector(const T newX, const T newY) { x = newX; y = newY; }

    Vector2< T > operator+(const Vector2< T > &vec) const { return Vector2< T >(x + vec.getX(), y + vec.getY()); }
    Vector2< T > operator-(const Vector2< T > &vec) const { return Vector2< T >(x - vec.getX(), y - vec.getY()); }

    Vector2< T > operator+(const T val) const { return Vector2< T >(x + val, y + val); }
    Vector2< T > operator-(const T val) const { return Vector2< T >(x - val, y - val); }
    Vector2< T > operator*(const T val) const { return Vector2< T >(x * val, y * val); }
    Vector2< T > operator/(const T val) const { return Vector2< T >(x / val, y / val); }


private:
    T x;
    T y;



};

typedef Vector2< float > Vector2f;




#endif
