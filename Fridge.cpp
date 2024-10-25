#include "Fridge.h"

void Fridge::SetModel(string m) {
    model = m;
}
void Fridge::SetWorkingPeriod(int p) {
    if (p >= 1 && p <= 20) {
        working_period = p;
    }
    else {
        cout << "Period is too long to work\n";
    }
}
void Fridge::SetOrigin(string o) {
    origin = o;
}
void Fridge::SetHeight(double h) {
    if (h >= 100 && h <= 200) {
        height = h;
    }

}
void Fridge::SetWeight(double w) {
    if (w >= 10 && w <= 50) {
        weight = w;
    }

}
void Fridge::SetColor(string c) {
    color = c;
}
void Fridge::SetType(string t) {
    type = t;
}
void Fridge::SetEnergy(int e) {
    if (e >= 1 && e <= 100) {
        energy = e;
    }
    else {
        cout << "Energy is unreal\n";
    }
}
void Fridge::SetWorkStatus(bool work) {
    if (work) {
        is_work = true;
        cout << "Fridge is working properly.\n";
    }
    else {
        is_work = false;
        cout << "You should repair it.\n";
    }
}


string Fridge::GetModel() {
    return model;
}
int Fridge::GetWorkingPeriod() {
    return working_period;
}
string Fridge::GetColor() {
    return color;
}
string Fridge::GetType() {
    return type;
}
int Fridge::GetEnergy() const {
    return energy;
}
bool Fridge::GetWorkStatus() {
    return is_work;
};

void Fridge::Freeze(string food) {
    cout << GetModel() << "  is freezing food good...\n";
}

void Fridge::Give(string food) {
    cout << GetModel() << "  is giving me food...\n";
}

void Fridge::Work() {
    cout << GetModel() << "  is working while electricity is in house...\n";
}

void Fridge::Save() {
    cout << GetModel() << "  saves my masks and cremes...\n";
}

void Fridge::Make() {
    cout << GetModel() << "  makes an ice...\n";
}
