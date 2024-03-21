#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL, "Russian");
wcout << L"Выберите фигуру :"<< endl << L"1) Треугольник" << endl << L"2) Круг" << endl;
int switch_key;
cin >> switch_key;

switch(switch_key){
case 1:{

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