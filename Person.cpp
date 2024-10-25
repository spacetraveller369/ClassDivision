#include "Person.h"

void Person::SetName(string n) {
    name = n;
}
void Person::SetAge(int a) {
    if (a >= 1 && a <= 100) {
        age = a;
    }
    else {
        cout << "Age is unreal\n";
    }
}
void Person::SetCountry(string c) {
    country = c;
}
void Person::SetHeight(double h) {
    if (h >= 130 && h <= 200) {
        height = h;
    }
    else {
        cout << "Height is unreal\n";
    }
}
void Person::SetWeight(double w) {
    if (w >= 30 && w <= 120) {
        weight = w;
    }
    else {
        cout << "Weight is unreal\n";
    }
}
void Person::SetColorHair(string ch) {
    color_hair = ch;
}
void Person::SetMood(string m) {
    mood = m;
}
void Person::SetHobby(string hb) {
    hobby = hb;
}
void Person::SetEnergy(int e) {
    if (e >= 1 && e <= 100) {
        energy = e;
    }
    else {
        cout << "Energy is unreal\n";
    }
}
void Person::SetDream(string d) {
    dream = d;
}
void Person::SetAliveStatus(bool is_alive) {
    if (is_alive) {
        is_alive = true;
        cout << "The person is alive.\n";
    }
    else {
        is_alive = false;
        cout << "The person is not alive.\n";
    }
}

string Person::GetName() {
        return name;
    }
    int Person::GetAge() const {
        return age;
    }
    string Person::GetCountry() {
        return country;
    }
    double Person::GetHeight() {
        return height;
    }
    double Person::GetWeight() {
        return weight;
    }
    string Person::GetColorHair() {
        return color_hair;
    }
    string Person::GetMood() {
        return mood;
    }
    string Person::GetHobby() {
        return hobby;
    }
    int Person::GetEnergy() const {
        return energy;
    }
    string Person::GetDream() {
        return dream;
    }
    bool Person::GetAliveStatus() {
        return is_alive;
    }

    void Person::Eat(string meal) {
        cout << GetName() << " is eating...\n";
    }

    void Person::Sleep() {
        cout << GetName() << " is sleeping...\n";
    }

    void Person::Walk(string street) {
        cout << GetName() << " is walking down " << street << "...\n";
    }

    void Person::Work() {
        cout << GetName() << " is working...\n";
    }

    void Person::Read() {
        cout << GetName() << " is reading...\n";
    }