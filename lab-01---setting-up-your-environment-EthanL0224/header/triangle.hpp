#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle {
    private:
        double base;
        double height;
    public:
        void set_height(double h);
        void set_base(double b);
        double area();
};
#endif