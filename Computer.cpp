#include "Computer.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

Computer::Computer() {
    SetKind("Dell");
    SetPrice(20000);
    SetAge(2);
    SetOrigin("USA");
    SetColor("black");
    SetIsWork(true);
    computer_count++;
}

Computer::Computer(const char* kind, int price, int age, string origin, string color, bool is_work) {

    SetKind(kind);
    SetPrice(price);
    SetAge(age);
    SetOrigin(origin);
    SetColor(color);
    SetIsWork(is_work);
    computer_count++;
}

Computer::Computer(const string& kind) {
    SetKind(kind.c_str());
    SetPrice(0);
    SetAge(0);
    SetOrigin("Unknown");
    SetColor("Unknown");
    SetIsWork(true);
}

Computer::Computer(int price) { //преобр.
    this->price = price;
    cout << this->price << "\n";
    computer_count++;
}


Computer::Computer(Computer& original) { //к-тор копирования
    SetKind(original.kind);
    SetPrice(original.price);
    SetAge(original.age);
    SetOrigin(original.origin);
    SetColor(original.color);
    SetIsWork(original.is_work);
}

Computer::~Computer() {
    delete[] this->kind;
    computer_count--;;
}

void Computer::Result() const {
    cout << this->kind << "\n";
    cout << this->price << "\n";
    cout << this->age << "\n";
    cout << this->origin << "\n";
    cout << this->color << "\n";
    cout << this->is_work << "\n";
    cout << "\n";
}

int Computer::GetCount() {
    return computer_count;
}

int Computer::computer_count = 0;

Computer::Computer(int a) {
    SetAge(a);
    computer_count++;
}

Computer Computer::operator + (const Computer& original) const {
    return this-> age + original.age;
}

bool Computer::operator > (const Computer& original) const {
    return this->age > original.age;
}

bool Computer::operator < (const Computer& original) const {
    return this->age < original.age;
}

bool Computer::operator == (const Computer& original) const {
    return this->age == original.age;
}
bool Computer::operator != (const Computer& original) const {
    return this->age != original.age;
}
ostream& operator << (ostream& i, Computer& original) {
    i << original.age << "Years";
    return i;
}
istream& operator >> (istream i, Computer& original) {
    cin >> original.age;
    cout << original.age << "Years";
    return i;
}

Computer& Computer::operator = (const Computer& original) {
    if (this == &original) {
        return *this;
    }


void Computer::SetKind(const char* kind) {
    if (this->kind != nullptr) {
        delete this->kind;
    }
    int length = strlen(kind) + 1;
    this->kind = new char[length];
    strcpy_s(this->kind, length, kind);
}

void Computer::SetPrice(int price) {
    this->price = price;
}

void Computer::SetAge(int age) {
    if (age >= 1) this->age = age;
    else throw "Unreal age!\n";
}

void Computer::SetOrigin(string origin) {
    this->origin = origin;
}

void Computer::SetColor(string color) {
    this->color = color;
}
void Computer::SetIsWork(bool is_work) {
    this->is_work = is_work;
}


string Computer::GetKind() const {
    return string(kind);
}
int Computer::GetPrice() {
    return price;
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
bool Computer::GetIsWork() {
    if (is_work) {
        cout << "This computer works" << "\n";
    }
};


void Computer::Eat() {
    cout << GetKind() << "  eats some electricity..\n";
}

void Computer::Teach() {
    cout << GetKind() << "  teaches me...\n";
}

void Computer::Give() {
    cout << GetKind() << "  gives me some money...\n";
}

void Computer::Joy() {
    cout << GetKind() << "  shows me films...\n";
}

void Computer::DisplayInfo() const {

    cout << "Information:" << "\n";
    cout << "Kind: " << kind << "\n";
    cout << "Price: " << price << "$" << "\n";
    cout << "Age:  " << age << "\n";
    cout << "Color: " << color << "\n";
    cout << "Is work: " << (is_work ? "Yes" : "No") << "\n";
}
