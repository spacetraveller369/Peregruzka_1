#include "Plant.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

Plant::Plant() {
    SetKind("Алоэ");
    SetAge(1);
    SetPrice(1000);
    SetColor("green");
    SetOrigin("Ukraine");
    SetAliveStatus(true);
    plant_count++;

}

Plant::Plant(const char* kind, int age, int price, string color, string origin, bool alive) {

    SetKind(kind);
    SetPrice(price);
    SetAge(age);
    SetOrigin(origin);
    SetColor(color);
    SetAliveStatus(alive);
    plant_count++;
}

Plant::Plant(const string& kind) {
    SetKind(kind.c_str());
    SetAge(0);
    SetPrice(0);
    SetColor("Unknown");
    SetOrigin("Unknown");
    SetColor("Unknown");
    SetAliveStatus(true);
}

Plant::Plant(int age) { //преобр.
    this->age = age;
    cout << this->age << "\n";
    plant_count++;
}


Plant::Plant(Plant& original) { //к-тор копирования
    SetKind(original.kind);
    SetAge(original.age);
    SetPrice(original.price);
    SetColor(original.color);
    SetOrigin(original.origin);
    SetAliveStatus(original.alive);
}

Plant::~Plant() {
    delete[] this->kind;
    plant_count--;;
}

void Plant::Result() const {
    cout << this->kind << "\n";
    cout << this->price << "\n";
    cout << this->age << "\n";
    cout << this->origin << "\n";
    cout << this->color << "\n";
    cout << this->alive << "\n";
    cout << "\n";
}

int Plant::GetCount() {
    return plant_count;
}

int Plant::plant_count = 0;

Plant::Plant(int p) {
    SetPrice(p);
    plant_count++;
}

Plant Plant::operator + (const Plant& original) const {
    return this->price + original.price;
}

bool Plant::operator > (const Plant& original) const {
    return this->price > original.price;
}

bool Plant::operator < (const Plant& original) const {
    return this->price < original.price;
}

bool Plant::operator == (const Plant& original) const {
    return this->price == original.price;
}
bool Plant::operator != (const Plant& original) const {
    return this->price != original.price;
}
ostream& operator << (ostream& i, Plant& original) {
    i << original.price << "Гривны";
    return i;
}
istream& operator >> (istream i, Plant& original) {
    cin >> original.price;
    cout << original.price << "Гривны";
    return i;
}

Plant& Plant::operator = (const Plant& original) {
    if (this == &original) {
        return *this;
    }


    void Plant::SetKind(const char* kind) {
        if (this->kind != nullptr) {
            delete this->kind;
        }
        int length = strlen(kind) + 1;
        this->kind = new char[length];
        strcpy_s(this->kind, length, kind);
    }

    void Plant::SetPrice(int price) {
        this->price = price;
    }

    void Plant::SetAge(int a) {
        if (age >= 1) this->age = age;
        else throw "Unreal age!\n";
    }

    void Plant::SetOrigin(string o) {
        this->origin = origin;
    }

    void Plant::SetColor(string c) {
        this->color = color;
    }
    void Plant::SetAliveStatus(bool alive) {
        this->alive = alive;
    }


    string Plant::GetKind() const {
        return string(kind);
    }
    int Plant::GetPrice() {
        return price;
    }
    int Plant::GetAge() {
        return age;
    }
    string Plant::GetOrigin() {
        return origin;
    }
    string Plant::GetColor() {
        return color;
    }
    bool Plant::GetAliveStatus() {
        if (alive) {
            cout << "Это растение живо" << "\n";
        }
    };


    void Plant::Drink() {
        cout << GetKind() << " is drinking...\n";

    }

    void Plant::Grow() {
        cout << GetKind() << " is growing...\n";

    }

    void Plant::Give() {
        cout << GetKind() << " is giving me an oxygen to breathe...\n";
    }

    void Plant::Joy() {
        cout << GetKind() << " is giving a joy to my cat...\n";
    }

    void Plant::DisplayInfo() const {

        cout << "Plant Information:" << "\n";
        cout << "  Kind: " << kind << "\n";
        cout << "  Age: " << age << " years" << "\n";
        cout << " Color: " << color << "\n";
        cout << " Is Alive: " << (alive ? "Yes" : "No") << "\n";
   
    }
