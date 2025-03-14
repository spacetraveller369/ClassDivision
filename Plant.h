#include <string>
#include <iostream>
using namespace std; 

class Plant {

private:
    string kind;
    string country;
    double height;
    double weight;
    string color;
    string condition;
    int energy;
    string desire;
    bool is_alive = true;

public:
    void SetKind(string k);
    void SetCountry(string c);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColor(string clr);
    void SetCondition(string cnd);
    void SetEnergy(int e);
    void SetDesire(string d);
    void SetAliveStatus(bool alive);

    string GetKind();
    string GetCountry();
    double GetHeight();
    double GetWeight();
    string GetColor();
    string GetCondition();
    int GetEnergy() const;
    string GetDesire();
    bool GetAliveStatus();


    void Drink(string water);

    void Grow();

    void Give(string oxygen);

    void Joy();

};