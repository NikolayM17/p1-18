#include <iostream>

/**
���������������� �� ����� �������� ������. ����������. �� ����� �++ ���.149
�.�. �������, �.�. ������, �.�. ���������; ��� ���. �.�. ���������

�������� ���������, ��������������� ������ ������.
������� ϸ��
*/

int main()
{
    char *pointer = NULL;
    int *ptr = new int;
    for (int i = 0; i < 1000; ++i){
        std::cout << ptr;
        for (int i = 0; i < 1000; ++i){
            pointer = new char[1000];
            std::cout << pointer;
        }
    }

    for (int i = 0; i < 100; ++i){
        std::cout << ptr;
        for (int i = 0; i < 1000; ++i){
            pointer = new char[1000];
            std::cout << pointer[i];
        }
    }

    for (int i = 0; i < 1000; ++i){
        std::cout << ptr;
        for (int i = 0; i < 100; ++i){
            pointer = new char[100];
            std::cout << pointer[i];
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
            pointer = new char[1000];
            std::cout << pointer;
        }
    }
    for (int i = 0; i < 100; ++i){
        std::cout << ptr;
        pointer = new char[100];
        std::cout << pointer[i];
        pointer = new char[100];
        std::cout << pointer[i];
        pointer = new char[100];
        std::cout << pointer[i];

        for (int i = 0; i < 100; ++i){
            pointer = new char[100];
            std::cout << pointer[i];
            for (int i = 0; i < 100; ++i){
                pointer = new char[100];
                std::cout << pointer[i];
                for (int i = 0; i < 100; ++i){
                    pointer = new char[100];
                    std::cout << pointer[i];
                }
                std::cout << pointer[i];
            }
            std::cout << pointer[i];
        }
        std::cout << pointer[i];
    }
    return 0;
}
