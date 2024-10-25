#include <string>
#include <iostream>
using namespace std;

class Person {

private:
    string name;
    int age;
    string country;
    double height;
    double weight;
    string color_hair;
    string mood;
    string hobby;
    int energy;
    string dream;
    bool is_alive = true;

public:
    void SetName(string n);
    void SetAge(int a);
    void SetCountry(string c);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColorHair(string ch);
    void SetMood(string m);
    void SetHobby(string hb);
    void SetEnergy(int e);
    void SetDream(string d);
    void SetAliveStatus(bool is_alive);

    string GetName();
    int GetAge() const;
    string GetCountry();
    double GetHeight();
    double GetWeight();
    string GetColorHair();
    string GetMood();
    string GetHobby();
    int GetEnergy() const;
    string GetDream();
    bool GetAliveStatus();

    void Eat(string meal);

    void Sleep();

    void Walk(string street);

    void Work();

    void Read();
};