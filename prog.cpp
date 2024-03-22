#define _USE_MATH_DEFINES 
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
    if ((edge1 + edge2 <= edge3) or (edge1 + edge3 <= edge2) or (edge3 + edge2 <= edge1)){
        wcout<< L"это НЕ ТРЕУГОЛЬНИК"<<endl;
        break;
    }
    //добавить еще защиты от дураков
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
case 2: {
wcout << L"Введите параметры окружности (радиус, угол кругового сектора) :" << endl;
double radius,degree;
cin >> radius >> degree;
double Square = M_PI * radius * radius;
wcout << L"Длинна окружности : " << 2 * M_PI * radius << endl;
wcout << L"Площадь окружности : " << Square << endl;
if (degree <0 or degree >360) // Проверка на дурака
wcout << L"Площадь кругового сектора не соответствует объективной действительности" << endl;
else
wcout << L"Площадь кругового сектора : " << Square*degree/360 << endl;
break;
}
default:
wcout << L"Что-то пошло не так, попробуйте снова позже." << endl;
break;
}
return 0;
}