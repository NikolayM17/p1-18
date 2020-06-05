/**
��������� ������ �� ������� ���������������
�1-18 ������� �. ������� �. ������� �.
06.06.2020
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>

#define MAX 10

using namespace std;

struct Stats
{
    int joyN;
    int hungN;
    int thirstN;
    int days;
};

void printstate(struct Stats tomo);
void printImage(string path);
void printMenu();

int main()
{
    setlocale(LC_ALL,"russian");
    struct Stats tomo; ///struct
    int f;
    /// cin >> tomo.joyN >> tomo.hungN >> tomo.thirstN;
    tomo.hungN = tomo.thirstN = tomo.joyN = MAX; /// ��������� ���� ���������� �� ��������
    tomo.days = 0; /// ������� ����
    while (1)  /// ����
    {
        /// Sleep(1000) ///��������
        tomo.days++; /// ������� ���-�� ����
        if (tomo.hungN == 0 || tomo.thirstN == 0) /// ���� "����" ������� ��� ����� ���� ,
            tomo.joyN--;                           ///���-�� ������� ������������
        if (tomo.hungN != 0)
            tomo.hungN--;
        if (tomo.thirstN != 0)
            tomo.thirstN--;


        system("cls"); ///������� �������
        if (tomo.joyN == 0) /// ���� ���-�� ������� ������������ �� ���� ���� ��������������
            break;
        else
            printstate(tomo);
        printImage("1.txt"); /// ����� �������� � ������� .txt
        printMenu();    /// ����� ���� ��������
        cin >> f;
        switch(f)  /// ��������
        {
        case 1:
        {
            tomo.hungN += 5; /// +�����
            if (tomo.hungN >= MAX)
                tomo.hungN = MAX;
            break;
        }
        case 2:
        {
            tomo.thirstN += 5; /// +�����
            if (tomo.thirstN >= MAX)
                tomo.thirstN = MAX;
            break;
        }
        case 3:
        {
            tomo.joyN += 5; /// +�������
            if (tomo.joyN >= MAX)
                tomo.joyN = MAX;
            break;
        }
        default:
            break;
        }
    }
    cout << "\t  ����: " << tomo.days << " ����(�)" << endl; /// �������� ��� ��������� �����
    printImage("2.txt"); /// ��������  "����"
    cout << "***************GAME OVER*************" << endl;
    return 0;
}

void printstate(struct Stats tomo)  /// ����� ���-�� "����"
{
    string joy(tomo.joyN,'Q');
    string hung(tomo.hungN,'Q');
    string thirst(tomo.thirstN,'Q');

    cout << "\t\t\t\t\t\t\t\t\t ����:" << tomo.days << endl; /// ������� ����
    cout << "**************************************" << endl;
    cout << "* �������: " << joy << endl;
    cout << "* �����: " << hung << endl;
    cout << "* �����: " << thirst <<endl;
}

void printImage(string path) /// ���� ����������� � ����� ��� � �������
{
    vector <string> strFile;
    string file;
    ifstream fin(path);
    while(fin >> file) /// ����
        strFile.push_back(file);
    for(size_t i = 0; i < strFile.size(); i++) /// �����
        cout << strFile[i] << endl;
}
void printMenu()    /// ����
{
    cout << "*------------------------------------*" << endl;
    cout << "*---1.--------�������----------------*" << endl;
    cout << "*---2.---------�����-----------------*" << endl;
    cout << "*---3.-------��������----------------*" << endl;
    cout << "**************************************" << endl;
}
