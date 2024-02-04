#include <iostream>
using namespace std;

class complex
{
public:
    float real, image;
    complex()
    {
        real = 0;
        image = 0;
    }

    complex(float real, float image)
    {
        this->image = image;
        this->real = real;
    }

    complex operator+(complex second){
        complex result;
        result.real = this->real + second.real;
        result.image = this->image + second.image;
        return result;
    }

    friend complex operator*(complex a , complex b){
        complex product;
        product.real = (a.real * b.real) - (a.image * b.image);
        product.image = (a.real * b.image) + (a.image * b.real);
        return product;
    }

    friend ostream& operator<<(ostream& os , complex& obj){
        os << "Complex number: " << obj.real << "+" << obj.image << "i" << endl;
        return os;
    }

    friend istream& operator >>(istream& is , complex& obj){
        cout << "Enter real part: ";
        is >> obj.real;
        cout << "Enter imaginary part: ";
        is >> obj.image;
        return is;
    }
};