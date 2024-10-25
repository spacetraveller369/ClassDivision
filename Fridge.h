#include <string>
#include <iostream>
using namespace std; 

class Fridge {

private:
    string model;
    int working_period;
    string origin;
    double height;
    double weight;
    string color;
    string type;
    int energy;
    bool is_work = true;

public:
    void SetModel(string m);
    void SetWorkingPeriod(int p);
    void SetOrigin(string o);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColor(string c);
    void SetType(string t);
    void SetEnergy(int e);
    void SetWorkStatus(bool work);


    string GetModel();
    int GetWorkingPeriod();
    string GetColor();
    string GetType();
    int GetEnergy() const;
    bool GetWorkStatus();


    void Freeze(string food);

    void Give(string food);

    void Work();

    void Save();

    void Make();
};