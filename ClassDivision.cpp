#include "Person.h"
#include "Cockroach.h"
#include "Fridge.h"
#include "Plant.h"
#include "Computer.h"
#include <iostream>

using namespace std;

int main() {

    Person person;

    person.SetName("Ilona");
    person.SetAge(30);
    person.SetCountry("Ukraine");
    person.SetHeight(169);
    person.SetWeight(65);
    person.SetColorHair("brown");
    person.SetMood("good");
    person.SetHobby("reading");
    person.SetEnergy(20);
    person.SetDream("wealth");
    person.SetAliveStatus("true");

    person.Eat("meal");

    person.Sleep();

    person.Walk("street");

    person.Work();

    person.Read();

    Cockroach cockroach;

    cockroach.SetColor("brown");
    cockroach.SetEnergy(100);
    cockroach.SetSize(10);
    cockroach.SetAliveStatus(true);
    cockroach.SetDangStatus(false);
    cockroach.SetAfwulStatus(true);
    cockroach.SetDesire("eat");
    cockroach.SetName("Victor");
    cockroach.SetPawsCount(4);

    cockroach.Eat("garbage");
    cockroach.Run("slipper");
    cockroach.MakeDisaster();
    cockroach.Frighten();

    Fridge fridge;

    fridge.SetModel("Liebherr");
    fridge.SetWorkingPeriod(10);
    fridge.SetOrigin("Germany");
    fridge.SetHeight(150);
    fridge.SetWeight(40);
    fridge.SetColor("grey");
    fridge.SetType("domestic");
    fridge.SetEnergy(80);
    fridge.SetWorkStatus(true);

    fridge.Freeze("food");
    fridge.Give("food");
    fridge.Save();
    fridge.Work();
    fridge.Make();

    Plant plant;
    plant.SetKind("hibiscus");
    plant.SetCountry("Ukraine");
    plant.SetHeight(30);
    plant.SetWeight(2);
    plant.SetColor("green");
    plant.SetCondition("good");
    plant.SetEnergy(90);
    plant.SetDesire("water");

    plant.Drink("water");
    plant.Grow();
    plant.Give("oxygen");
    plant.Joy();

    Computer computer;

    computer.SetKind("Dell");
    computer.SetAge(2);
    computer.SetOrigin("China");
    computer.SetHeight(10);
    computer.SetWeight(1);
    computer.SetColor("black");
    computer.SetCondition("good");
    computer.Eat("electricity");
    computer.Teach();
    computer.Give("money");
    computer.Joy();
   
}