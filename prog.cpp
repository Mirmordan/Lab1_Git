#include <cmath>
#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL, "Russian");
wcout << L"Выберите фигуру :"<< endl << L"1) Треугольник" << endl << L"2) Круг" << endl;
int switch_key;
cin >> switch_key;

switch(switch_key){
    case 1:{
        wcout << L"Введите длины трёх сторон треугольника :" << endl;
        double edge1,edge2,edge3;
        cin >> edge1 >> edge2 >> edge3;
        wcout << L"Периметр : " << edge1+edge2+edge3 <<endl;
        double half_per = (edge1+edge2+edge3)/2;
        double square = sqrt(half_per*(half_per-edge1)*(half_per-edge2)*(half_per-edge3));
        wcout << L"Площадь : " << square <<endl;
        if ( edge1==edge2 or edge2==edge3 or edge1==edge3)
        wcout << L"Треугольник равнобедренный" <<endl;
        else
        wcout << L"Треугольник не равнобедренный" <<endl;
        break; 
        }
    case 2:{

break;
}
default:
wcout << L"Что-то пошло не так, попробуйте снова позже." << endl;
break;
}
return 0;
}