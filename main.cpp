#include <iostream>
#include <vector>
#include <numeric>
#include <string>
using namespace std;

class Student {
public:
    float calculate_grade() {
        float sum = accumulate(grades.begin(),grades.end(), 0.0f);
        return sum / grades.size();
    }
    bool add_grade(float grade) {
        if (grade >= 2.0 && grade <= 5.0) {

            grades.push_back(grade);
            return true;
        }

        return false;
    }
    void print() {
        cout<<name<<" "<<surname;
        for(auto grade : grades){
            cout<<grade<<" ";
        };
    };

    Student(string n) {
        name = n;
    }
    void set_surname(string sur) { // setter
        surname = sur;
    }
    string get_surname() { // getter
        return surname;
    }
    void set_album_number(int albu) { // setter
        album_number = albu;
    }
    int get_album_number() { // getter
        return album_number;
    }
    bool add_multiple_grades(vector<int> grades){
        for(auto grade : grades){
            if (grade >= 2.0 && grade <= 5.0) {

                grades.push_back(grade);
                return true;
            }

            return false;}
    }
    void check_pass(){
        int p = 0;
        for (auto grade : grades){
            if (grade == 2){
                p++;
            }}
        if(p>1){
            cout<<"Didn't pass";
        }
        else{
            cout<<"passed";
        }

    }
    private:
    string name;
    string surname;
    int album_number;
    vector<float> grades;
};

class Complex {
    public:
    Complex(double r) {
        real_part = r;
    }
    Complex(double r,double i) {
        real_part = r;
        imaginary_part = i;
    }
    void print() {
        cout<<real_part<<" "<<imaginary_part<<"i";

    };
    void set_re(double r){
        real_part = r;
    }
    void set_im(double i){
        imaginary_part = i;
    }
    Complex add(Complex b){
        return Complex(real_part + b.real_part,imaginary_part + b.imaginary_part);

    }
    private:
    double real_part;
    double imaginary_part;


};

int main()
{
    Complex a(1.0, -2.0); // creates 1-2i
    Complex b(3.14); // creates 3.14

    b.set_im(-5);

    Complex c = a.add(b);

    c.print(); // prints 4.14-7i
    return 0;
}
