/** ������������ ������� 38. �������� �������������� �������.
������� ������� �� 2-� �������: ������� �., ������� �.
�1-18, 26.05.2020 �.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "command.h"

using namespace std;

typedef std::vector <Order> vOrders;


// ������������� ����� ������
void edit(vOrders &v, int orderid, Date new_date) {
    for(size_t i=0;i<v.size();i++)
        if (orderid == v[i].order_id){ // �������� �� ID
            cout << v[i].order_id << "   \t" << v[i].saler << "   \t" << v[i].customer << "   \t"
            << v[i].date.year << "." << v[i].date.month << "." << v[i].date.day << "   \t"
            << v[i].cost << endl << "������� ����� ����� ������:";
            cin >> v[i].cost ; // ���� ����� �����
            v[i].date = new_date;
            cout << v[i].order_id << "   \t" << v[i].saler << "   \t" << v[i].customer << "   \t"
            << v[i].date.year << "." << v[i].date.month << "." << v[i].date.day << "   \t" << v[i].cost << endl;

        }
    cin.get(); // �����
}

// ��������� �� �����
void load(std::vector<Order> &v, string fname) {
    Order order; // ������������� ��������� ������
    ifstream in("orders.txt");

    char delim;
    v.clear();  // ������� ����� ������� ��� ������ "�������" ������
    while (in >> order.order_id >> order.saler >> order.customer >>
        order.date.year >> delim >> order.date.month >> delim >> order.date.day >> order.cost)
    {
        v.push_back(order); // ������ ����� ������ �� ������������� ���������
    }
}

// ��������� � ����
void save(vOrders v, string fname) {
    ofstream out(fname);
     for (size_t i = 0; i < v.size(); i++)
        out << v[i].order_id << "   \t" << v[i].saler << "   \t" << v[i].customer << "   \t"
        << v[i].date.year << "." << v[i].date.month << "." << v[i].date.day << "\t"
        << v[i].cost << endl;
}

// �������� ����� �����
void append(vOrders &v) {
    Order order;
    char delim; // ���������� ��� ���������� ����
    cout << "������� ������ ������������ ������, ����� ������:" << endl;
    cin >> order.order_id >> order.saler >> order.customer
    >> order.date.year >> delim >> order.date.month
    >> delim >> order.date.day >> order.cost;
    v.push_back(order); // ���������� � ����� ������
}

// ������� �����
void del(vOrders &v, int orderid) {
    for (size_t i = 0; i < v.size(); i++) // �������� �� ID
        if (orderid == v[i].order_id)
            v.erase(v.begin() + i);
}

// ���������� ��� ���������� �� �������� �����
bool comp_sum (const Saler& a, const Saler& b) { return (a.sum > b.sum); }

// ����������� ��� ���������� �� ����������� ����
bool comp_year (const Order& a, const Order& b) { return (a.date.year < b.date.year); }

bool comp_month (const Order& a, const Order& b) { return (a.date.month < b.date.month); }

bool comp_day (const Order& a, const Order& b) { return (a.date.day < b.date.day); }

// ����������� �� ����
void vsort(vOrders &v) {
    sort(v.begin(), v.end(), comp_year); // ���������� �� ����
    sort(v.begin(), v.end(), comp_month);// ���������� �� ������
    sort(v.begin(), v.end(), comp_day);// ���������� �� ���
}

// ������ ���� �� ������� �������� (�� �������� ����� �����)
void print_salers(vOrders v) {
    vector <Saler> salers; // ��������� ������ ��� ����������
    for (size_t i = 0; i < v.size(); i++) {
        size_t j;
        for (j = 0; j < salers.size() && salers[j].name != v[i].saler; j++) // ���������� � ������ �� ��������
            ;
        if (j < salers.size())
            salers[j].sum += v[i].cost;             //� ������������ ������������� �������
        else {
            Saler s;                        // �������� ������ �������� � ������
            s.name = v[i].saler;
            s.sum = v[i].cost;
            salers.push_back(s);
        }
    }
    sort(salers.begin(), salers.end(), comp_sum); // ���������� �� �����
    for (size_t i = 0; i < salers.size(); i++)
        cout << salers[i].name << "   \t" << salers[i].sum << endl;
    cin.get(); // �����
}

// ������ ����� ������
void print_all(vOrders v) {
    cout << "�����\t��������\t����������\t����\t\t�����\n";
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i].order_id << "   \t" << v[i].saler << "   \t" << v[i].customer << "   \t" <<
        v[i].date.year << "." << v[i].date.month << "." << v[i].date.day << "   \t" << v[i].cost << endl;
}
