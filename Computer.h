#include <string>
#include <iostream>
using namespace std;

class Computer {

private:
    char* kind;
    int price;
    int age;
    string origin;
    string color;
    bool is_work;
    static int computer_count;

public:

    Computer(); //��� ���-��
    Computer(const char*, int, int, string, string, bool); //� ���-��
    Computer(const string&); //��������������
    ~Computer(); //�������������
    Computer(Computer& original); //�-��� �����������
    static int GetCount(); //������� ���-�� ��������
    void Result() const; //���� ��� ����������� �-����
    Computer(int a); //����������

    //Getter

    void SetKind(const char* kind);
    void SetPrice(int p);
    void SetAge(int a);
    void SetOrigin(string o);
    void SetColor(string c);
    void SetIsWork(bool is_work);

    //Setter

    string GetKind() const;
    int GetPrice();
    int GetAge();
    string GetOrigin();
    string GetColor();
    bool GetIsWork();

    Computer operator + (const Computer& original) const;
    bool operator > (const Computer& original) const;
    bool operator < (const Computer& original) const;
    bool operator == (const Computer& original) const;
    bool operator != (const Computer& original) const;
    friend ostream& operator << (ostream& i, Computer& original);
    friend istream& operator >> (istream& i, Computer& original);
    Computer& operator = (const Computer& original);


    //Method

    void Eat();
    void Teach();
    void Give();
    void Joy();
    void DisplayInfo() const;

    //Destructor

    ~Computer() {
        if (kind != nullptr) {
            delete[] kind;
            kind = nullptr;
        }
    }

};

