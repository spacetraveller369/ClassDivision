#include "Cockroach.h"

void Cockroach::SetName(string n) {
    name = n;
}
void Cockroach::SetSize(double s) {
    if (s >= 1 && s <= 30) {
        size = s;
    }
    else {
        cout << "Size is unreal\n";
    }
}
void Cockroach::SetPawsCount(int pc) {
    if (pc == 4) {
        paws_count = pc;
    }
    else {
        cout << "Maybe cockroach is disabled?\n";
    }
}
void Cockroach::SetColor(string c) {
    color = c;
}
void Cockroach::SetDesire(string d) {
    desire = d;
}
void Cockroach::SetEnergy(int e) {
    if (e >= 1 && e <= 100) {
        energy = e;
    }
    else {
        cout << "Energy is unreal\n";
    }
}
void Cockroach::SetAliveStatus(bool alive) {
    if (alive) {
        is_alive = true;
        cout << "Cockroach is alive.\n";
    }
    else {
        is_alive = false;
        cout << "Cockroach is not alive.\n";
    }
}
void Cockroach::SetAfwulStatus(bool awful) {
    if (awful) {
        is_awful = true;
        cout << "Cockroach is awful.\n";
    }
    else {
        is_awful = false;
        cout << "Cockroach is nice.\n";
    }
}
void Cockroach::SetDangStatus(bool dangerous) {
    if (dangerous) {
        is_dangerous = true;
        cout << "Cockroach is dangerous for your life!!!.\n";
    }
    else {
        is_dangerous = false;
        cout << "Cockroach is safe.\n";
    }
}


string Cockroach::GetName() {
    return name;
}
double Cockroach::GetSize() {
    return size;
}
int Cockroach::GetPawsCount() {
    return paws_count;
}
string Cockroach::GetColor() {
    return color;
}
string Cockroach::GetDesire() {
    return desire;
}
int Cockroach::GetEnergy() const {
    return energy;
}
bool Cockroach::GetAliveStatus() {
    return is_alive;
}
bool Cockroach::GetAwfulStatus()
{
    return is_awful;
}
bool Cockroach::GetDangStatus()
{
    return is_awful;
};


void Cockroach::Eat(string meal) {
    cout << GetName() << " is eating...\n";
}

void Cockroach::Sleep() {
    cout << GetName() << " is sleeping...\n";
}

void Cockroach::Run(string slipper) {
    cout << GetName() << " is running...\n";
}

void Cockroach::MakeDisaster() {
    cout << GetName() << " is making a disaster everywhere he appears...\n";
}

void Cockroach::Frighten() {
    cout << GetName() << "  frightens everyone in the house...\n";
}
