#ifndef COMPLEX_HPP
#define COMPLEX_HPP
class Complex{
    double re, im;
public:
    Complex(): re(0), im(0) {};
    Complex(double r, double i): re(r), im(i) {};
    Complex(double r): re(r), im(0) {};
    
    double getreal() const {return re;}
    double getimag() const {return im;}
    void real(double r) {re = r;}
    void imag(double i) {im = i;}
    Complex& operator+=(Complex z) {
        re += z.re;
        im += z.im;
        return *this;
    }
    Complex& operator-=(Complex z) {
        re -= z.re;
        im -= z.im;
        return *this;
    }
    Complex operator+(const Complex &z) {
        Complex result = *this;
        result += z;
        return result;
    }
    Complex operator-(const Complex &z) {
        Complex result = *this;
        result -= z;
        return result;
    }
    Complex operator-() {
        Complex result = *this;
        result.real(-1 * result.getreal());
        result.imag(-1 * result.getimag());
        return result;
    }
};
#endif
