#include <cstdlib>
#include <iostream>
#include <string>
#include "locale.h"
#include <windows.h>
using namespace std;


int AlgorHorspool(string first, string second)
{
    int LenFirst = first.length();//����� ���������
    int LenSecond = second.length();//����� ������
    if (LenFirst < LenSecond) //���� ����� ������ ������ ���������, �� ��������� ���
        return -1;
    int arrsym[255]; //������ ��� ��������
    for (int i = 0; i < 255; i++) //������ ������� ������� �������� = ����� ������
        arrsym[i] = LenSecond;
    for (int i = 0;i < LenSecond - 1;i++) //���������� �����������
    {
        arrsym[second[i]]=LenSecond - i - 1;
    }
    for (int i = 0; i < LenSecond-1;i++)//������������ �����������
    {
        for (int j = 0;j < LenSecond-1;j++)
        {
            if ((second[i] == second[j]) && (i < j))
            {
                
                arrsym[second[i]] = LenSecond - i - 1;
            }
             
            if (second[i] == second[LenSecond - 1])
            {
              
                arrsym[second[LenSecond - 1]] = LenSecond - i - 1;
            }
        }
    }
    for (int i = 0;i < LenSecond;i++)
        cout << arrsym[second[i]];
    cout << endl;
    for (int i = 0;i < LenFirst;i++)
    {
        for (int j = 0;j < LenSecond-1;j++)
        {
            if (second[j] == first[i]) 
            {
                arrsym[first[i]] = arrsym[second[j]];
                break;
            } 
        }
    }    
    int i = LenSecond-1;
    int j = 0;
    int res = -1;
    while (i <= LenFirst)
    {
        int k = 0;
        while ((k < LenSecond)&&(second[LenSecond - k-1] == first[i - k]))
        {
            k++;
        }
        if (k == LenSecond)
        {
            res = (i - LenSecond + 1);
            i = i + arrsym[first[i]];
        }
        else
                i = i + arrsym[first[i]];
        
    }
    if (res >= 0)
        return res;
    return -1;
}

int main()
{
    setlocale(LC_ALL,"Russian");
    string first, second;
    first = "ab baa gab anbb abba";
    for (int j = 0;j < 4;j++)
    {
        cout << first << endl;
        cin >> second;
        //cout << "������� �������� ������" << endl;
        //cin >> first;
        //cout << "\n������� ������ ��� ������" << endl;
        //cin >> second;

        int i = AlgorHorspool(first, second);
        if (i != -1)
        {
            for (int j = 0;j < i;j++)
                cout << " ";
            cout << second;
            cout << "\n��������� ��������� ����� " << second << " ���������� � " << i + 1 << " �������" << endl;
        }
        else
            cout << "�� ������� ���������" << endl;
    }
    return 0;
}