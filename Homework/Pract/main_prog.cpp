/*
��� ����������� ������������� �������� � ��������� ������� ������� � ����� mfuncs.h.

��������� nlist, str_table, ������������ ��� ����������� �������� ������ �������
� ������. � ����� mmenu.cpp ������������ ��������� �� str_table � ������ ���������� �� nlist

���� mhash.cpp ��������� ��������� �������

���� miohandler.cpp ������ �������, �������������� ���������������� ����, ������
� ������ �� ������� ��� ����� � ������ � ������� ��� ����

���� mmenu.cpp ���������� ��������� ����������� ����.

��������� ��������� �� ������ �� ���������� ����� ����� �������
<������>|<�����������>\n
� ���� ����������� ����� ����������� ��������� �������������� �������� '|',
������� �� ����� ����������� ��� ������������ ������� (� ������ ����������� ������
������ ������ '|' � �����)

������ �������������� ����� � ��������� ���� � ����� ����� �� �������
*/
#include "mfuncs.h"

int main()
{
    menu_main();

    getch();
    return 0;
}