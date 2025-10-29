#include<iostream>
using namespace std;
class param{
    float height;
    float radius;
    float volume;
    public:
    void cylinder(){
        this->height=10.0;
        this->radius=5.0;
    }
    void cylinder(float h, float r){
        this->height=h;
        this->radius=r;
    }
    void setHeight(float h){
        this->height=h;
    }
    void setRadius(float r){
        this->radius=r;
    }
    float getHeight(){
        return height;
    }
    float getRadius(){
        return radius;
    }
    void calc_Volume(){
        this->volume=3.14*radius*radius*height;
    }
    float getVolume(){
        return volume;
    }
};
int main(){
    param c1;
    c1.cylinder();
    c1.calc_Volume();
    cout<<"Cylinder with default parameters:\n";
    cout<<"Height: "<<c1.getHeight()<<"\n";
    cout<<"Radius: "<<c1.getRadius()<<"\n";
    cout<<"Volume: "<<c1.getVolume()<<"\n\n";

    param c2;
    c2.cylinder(15.0,7.0);
    c2.calc_Volume();
    cout<<"Cylinder with parameterized constructor:\n";
    cout<<"Height: "<<c2.getHeight()<<"\n";
    cout<<"Radius: "<<c2.getRadius()<<"\n";
    cout<<"Volume: "<<c2.getVolume()<<"\n\n";

    param c3;
    c3.setHeight(20.0);
    c3.setRadius(10.0);
    c3.calc_Volume();
    cout<<"Cylinder with setter methods:\n";
    cout<<"Height: "<<c3.getHeight()<<"\n";
    cout<<"Radius: "<<c3.getRadius()<<"\n";
    cout<<"Volume: "<<c3.getVolume()<<"\n";

    return 0;
}