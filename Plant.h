#include <string>
#include <iostream>
using namespace std;

class Plant {

private:
    char* kind;
    int age;
    int price;
    string color;
    string origin;
    bool alive;
    static int plant_count;

public:

    Plant(); //без пар-ов
    Plant(const char*, int, int, string, string, bool); //с пар-ми
    Plant(const string&); //преобразование
    ~Plant(); //делегирование
    Plant(Plant& original); //к-тор копирования
    static int GetCount(); //подсчет кол-ва объектов
    void Result() const; //вівод для копирования к-тора
    Plant(int p); //перегрузка

    void SetKind(const char* kind);
    void SetAge(int a);
    void SetPrice(int p);
    void SetColor(string c);
    void SetOrigin(string o);
    void SetAliveStatus(bool alive);

    string GetKind() const;
    int GetAge();
    int GetPrice();
    string GetColor();
    string GetOrigin();
    bool GetAliveStatus();

    Plant operator + (const Plant& original) const;
    bool operator > (const Plant& original) const;
    bool operator < (const Plant& original) const;
    bool operator == (const Plant& original) const;
    bool operator != (const Plant& original) const;
    friend ostream& operator << (ostream& i, Plant& original);
    friend istream& operator >> (istream& i, Plant& original);
    Plant& operator = (const Plant& original);
    


    void Drink();
    void Grow();
    void Give();
    void Joy();
    void DisplayInfo() const;

    ~Plant() {
        if (kind != nullptr) {
            delete[] kind;
            kind = nullptr;
        }
    }
};
