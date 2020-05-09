// ��������� �.�., ����� ����, 09.05.2020
// ��������� ("����") ��� ������������ �������������� ������� � �������

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

struct Date { // ����
    int year; // ���
    int month; // �����
    int day; // ����
};

struct Order { // �����
    int order_id; // ����� ������
    std::string saler; // ��������
    std::string customer; // ��������
    Date date; // ���� ������
    double cost; // ����� ������
};

struct Saler {
    string name;
    double sum;
};

typedef std::vector <Order> vOrders;

// ����
void menu() {
    cout << "0. �����\n";
    cout << "1. ��������� �� �����\n";
    cout << "2. ��������� � ����\n";
    cout << "3. �������� ����� �����\n";
    cout << "4. ������������� ����� ������\n";
    cout << "5. ������� �����\n";
    cout << "6. ����������� �� ����\n";
    cout << "7. ������ ���� �� ������� �������� (�� �������� ����� �����)\n";
    cout << "8. ������ ����� ������\n";
}

// ������������� ����� ������
void edit(vOrders &v, int orderid, Date new_date) {
}

// ��������� �� �����
void load(std::vector<Order> & v, string fname) {
    Order order;
    ifstream in("orders.txt");

    char delim;
    v.clear();
    while (in >> order.order_id >> order.saler >> order.customer >>
        order.date.year >> delim >> order.date.month >> delim >> order.date.day >> delim >> order.cost)
    {
        v.push_back(order);
    }
}

// ��������� � ����
void save(vOrders v, std::ofstream out) {
}

// �������� ����� �����
void append() {
}

// ������� �����
void del() {
}

// ���������� ��� ���������� �� �������� �����
bool comp_sum (const Saler& a, const Saler& b) { return (a.sum > b.sum); }

// ����������� �� ����
void vsort() {
}

// ������ ���� �� ������� �������� (�� �������� ����� �����)
void print_salers(vOrders v) {
    vector <Saler> salers;
    for (size_t i = 0; i < v.size(); i++) {
        size_t j;
        for (j = 0; j < salers.size() && salers[j].name != v[i].saler; j++)
            ;
        if (j < salers.size())
            salers[j].sum += v[i].cost;
        else {
            Saler s;
            s.name = v[i].saler;
            s.sum = v[i].cost;
            salers.push_back(s);
        }
    }
    sort(salers.begin(), salers.end(), comp_sum);
    for (size_t i = 0; i < salers.size(); i++)
        cout << salers[i].name << "\t" << salers[i].sum << endl;
    cin.get();
}

// ������ ����� ������
void print_all(vOrders v) {
    cout << "�����\t��������\t����������\t����\t�����\n";
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i].order_id << "\t" << v[i].saler << "\t" << v[i].customer << endl;
}

int main() {
    system("chcp 1251>nul");
    vOrders v;
    string fname = "orders.txt";
    int choice = -1;
    while (choice != 0) {
        menu();
        cin >> choice;
        switch (choice) {
        case 0:
            // 0. �����
            break;
        case 1:
            // 1. ��������� �� �����
            load(v, fname);
            break;
        case 2:
            // 2. ��������� � ����
            // save();
            break;
        case 3:
            // 3. �������� ����� �����
            append();
            break;
        case 4:
            // 4. ������������� ����� ������
            // edit();
            break;
        case 5:
            // 5. ������� �����
            del();
            break;
        case 6:
            // 6. ����������� �� ����
            vsort();
            break;
        case 7:
            // 7. ������ ���� �� ������� �������� (�� �������� ����� �����)
            print_salers(v);
            break;
        case 8:
            // 8. ������ ����� ������
            print_all(v);
            break;
        default:
            cout << "�������� ����. �� 0 �� 8" << endl;
            break;
        }
    }

    return 0;
}
