#include "Computer.h"

    void Computer::SetKind(string k) {
        kind = k;
    }
    void Computer::SetAge(int a) {
        if (a >= 1 && a <= 10) {
            age = a;
        }
    }
    void Computer::SetOrigin(string o) {
        origin = o;
    }
    void Computer::SetHeight(double h) {
        if (h >= 10 && h <= 20) {
            height = h;
        }

    }
    void Computer::SetWeight(double w) {
        if (w >= 0 && w <= 5) {
            weight = w;
        }

    }
    void Computer::SetColor(string c) {
        color = c;
    }
    void Computer::SetCondition(string cond) {
        condition = cond;
    }
    void Computer::SetWorkStatus(bool work) {
        if (work) {
            work = true;
            cout << "Computer is working properly.\n";
        }

    }


    string Computer::GetKind() {
        return kind;
    }
    int Computer::GetAge() {
        return age;
    }
    string Computer::GetOrigin() {
        return origin;
    }
    string Computer::GetColor() {
        return color;
    }
    double Computer::GetHeight() {
        return height;
    }
    double Computer::GetWeight() {
        return weight;
    }
    string Computer::GetCondition() {
        return condition;
    };

    void Computer::Eat(string electricity) {
        cout << GetKind() << "  eats some electricity..\n";
    }

    void Computer::Teach() {
        cout << GetKind() << "  teaches me...\n";
    }

    void Computer::Give(string money) {
        cout << GetKind() << "  gives me some money...\n";
    }

    void Computer::Joy() {
        cout << GetKind() << "  shows me films...\n";
    }
