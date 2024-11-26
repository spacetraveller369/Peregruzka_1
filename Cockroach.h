#include <string>
#include <iostream>
using namespace std;

class Cockroach {

private:
    char* name;
    int size;
    string color;
    bool is_awful;


public:

    Cockroach(); //��� ���-��
    Cockroach(const char*, int, string, bool); //� ���-��
    Cockroach(const string&); //��������������
    ~Cockroach(); //�������������
    Cockroach(Cockroach& original); //�-��� �����������
    static int GetCount(); //������� ���-�� ��������
    void Result() const; //���� ��� ����������� �-����
    Cockroach(int s); //����������

    void SetName(const char* kind);
    void SetSize(int a);
    void SetColor(string c);
    void SetAfwul(bool afwul);

    string GetName() const;
    int GetSize();
    string GetColor();
    bool GetAwful();

    Cockroach operator + (const Cockroach& original) const;
    bool operator > (const Cockroach& original) const;
    bool operator < (const Cockroach& original) const;
    bool operator == (const Cockroach& original) const;
    bool operator != (const Cockroach& original) const;
    friend ostream& operator << (ostream& i, Cockroach& original);
    friend istream& operator >> (istream& i, Cockroach& original);
    Cockroach& operator = (const Cockroach& original);



    void Eat();
    void Sleep();
    void Run();
    void MakeDisaster();
    void Frighten();

    void DisplayInfo() const;

    ~Cockroach() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
    }
};
