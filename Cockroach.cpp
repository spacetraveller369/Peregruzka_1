#include "Cockroach.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

Cockroach::Cockroach() {
    SetName("Рыжик");
    SetSize(10);
    SetColor("red");
    SetAfwul(true);
    cockroach_count++;

}

Cockroach::Cockroach(const char* name, int size, string color, bool awful) {

    SetName(name);
    SetSize(size);
    SetColor(color);
    SetAfwul(is_awful);
    cockroach_count++;
}

Cockroach::Cockroach(const string& name) {
    SetName(name.c_str());
    SetAge(0);
    SetColor("Unknown");
    SetAwful(true);
}

Cockroach::Cockroach(int size) { //преобр.
    this->size = size;
    cout << this->size << "\n";
    cockroach_count++;
}


Cockroach::Cockroach(Cockroach& original) { //к-тор копирования
    SetName(original.name);
    SetSize(original.size);
    SetColor(original.color);
    SetAwful(original.is_awful);
}

Cockroach::~Cockroach() {
    delete[] this->name;
    cockroach_count--;;
}

void Cockroach::Result() const {
    cout << this->name << "\n";
    cout << this->size << "\n";
    cout << this->color<< "\n";
    cout << this->is_awful << "\n";
    cout << "\n";
}

int Cockroach::GetCount() {
    return cockroach_count;
}

int Cockroach::cockroach_count = 0;

Cockroach::Cockroach(int size) {
    SetSize(size);
    cockroach_count++;
}

Cockroach::Cockroach::operator + (const Cockroach& original) const {
    return this->size + original.size;
}

bool Cockroach::operator > (const Cockroach& original) const {
    return this->size > original.size;
}

bool Cockroach::operator < (const Cockroach& original) const {
    return this->size < original.size;
}

bool Cockroach::operator == (const Cockroach& original) const {
    return this->size == original.size;
}
bool Cockroach::operator != (const Cockroach& original) const {
    return this->size != original.size;
}
ostream& operator << (ostream& i, Cockroach& original) {
    i << original.size << "cm";
    return i;
}
istream& operator >> (istream i, Cockroach& original) {
    cin >> original.size;
    cout << original.size << "cm";
    return i;
}

Cockroach& Cockroach::operator = (const Cockroach& original) {
    if (this == &original) {
        return *this;
    }


    void Cockroach::SetName(const char* name) {
        if (this->name != nullptr) {
            delete[] this->name;
        }
        int length = strlen(name) + 1;
        this->name = new char[length];
        strcpy_s(this->name, length, name);
    }
    void Cockroach::SetSize(double s) {
        if (s >= 1 && s <= 30) {
            size = s;
        }
        else {
            throw "Size is unreal\n";
        }
    }
    void Cockroach::SetColor(string color) {
        this->color = color;
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
}


    string Cockroach::GetName() const { return string(name); }

    double Cockroach::GetSize() {
        return size;
    }
    string Cockroach::GetColor() {
        return color;
    }
    bool Cockroach::GetAwful()
    {
        return is_awful;
    };
   

    void Cockroach::Eat() {
        cout << GetName() << " is eating...\n";
    }

    void Cockroach::Sleep() {
        cout << GetName() << " is sleeping...\n";
    }

    void Cockroach::Run() {
         cout << GetName() << " running...";

        }
    }

    void Cockroach::MakeDisaster() {
        cout << GetName() << " is making a disaster everywhere he appears...\n";
    }

    void Cockroach::Frighten() {
        cout << GetName() << "  frightens everyone in the house...\n";
    }

    void Cockroach::DisplayInfo() const {

        cout << "Cockroach Information:" << "\n";
        cout << "  Name: " << name << "\n";
        cout << "  Size: " << size << " cm" << "\n";
        cout << " Color: " << color << "\n";
        cout << " Is Awful: " << (is_awful ? "Yes" : "No") << "\n";
    }