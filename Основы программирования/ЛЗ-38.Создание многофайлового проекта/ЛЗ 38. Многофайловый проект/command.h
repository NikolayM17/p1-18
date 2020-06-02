/** ������������ ������� 38. �������� �������������� �������.
������� ������� �� 2-� �������: ������� �., ������� �.
�1-18, 26.05.2020 �.
*/

#ifndef COMMAND_H
#define COMMAND_H



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

struct Saler { // ��������
    std::string name; // �������
    double sum; // ����� �������
};

// �������� ������
typedef std::vector <Order> vOrders;

// 4. ������������� ����� ������
void edit(vOrders &v, int orderid, Date new_date);

// 1. ��������� �� �����
void load(std::vector<Order> &v, std::string fname);

// 2. ��������� � ����
void save(vOrders v, std::string fname);

// 3. �������� ����� �����
void append(vOrders &v);

// 5. ������� �����
void del(vOrders &v, int orderid);

// 6. ����������� �� ����
void vsort(vOrders &v);

// 7. ������ ���� �� ������� �������� (�� �������� ����� �����)
void print_salers(vOrders v);

// 8. ������ ����� ������
void print_all(vOrders v);

#endif
