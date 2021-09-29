#include<iostream>

using namespace std;

// class definition

class Circle
{
    private:

        double radius;
    public:
        void setRadius(double Radius)
        {

        radius = Radius;
        }
        double getRadius()
        {
            return radius;
        }

        double  compute_area()
        {
            return 3.14*radius*radius;
        }


};

// main function

int main()
{

    Circle obj;
    // accessing public datamember outside class
    obj.setRadius (5.5);
    cout << "Radius is: " << obj.getRadius() << "\n";
    cout << "Area is: " << obj.compute_area()<<"\n";

    return 0;
};
