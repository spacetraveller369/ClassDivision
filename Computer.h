#include <string>
#include <iostream>
using namespace std; 

class Computer {

private:
    string kind;
    int age;
    string origin;
    double height;
    double weight;
    string color;
    string condition;
    bool work = true;

public:
    void SetKind(string k);
    void SetAge(int a);
    void SetOrigin(string o);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColor(string c);
    void SetCondition(string cond);
    void SetWorkStatus(bool work);


    string GetKind();
    int GetAge();
    string GetOrigin();
    string GetColor();
    double GetHeight();
    double GetWeight();
    string GetCondition();

    void Eat(string electricity);

    void Teach();

    void Give(string money);

    void Joy();

};
