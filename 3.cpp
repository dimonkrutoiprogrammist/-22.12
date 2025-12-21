#include <iostream>
#include <algorithm> 
#include <cstring> 
using namespace std;

void Output(const string &stroka){

    //Переменная для подсчета длины строки
    int n = stroka.length();  
    string str = "";


    for(int i = 0; i < n; i++){
        char c = stroka[i];
      
        bool found = false;

        //Перебор строки для проверки повтора
        for(int j = 0; j < str.length(); j++){
           
            if(str[j] == c){
                found = true;
                break;
            }
        }
       
        if(found == false){
            str += c;
        }
    }
    //Вывод готовой строки
    cout << "\nOutput: " << str;
}

int main(){
    //Переменная
    string stroka;
    //Ввод строки
    cout << "String: ";
    //Принимает строку с пробелами
    getline(cin, stroka);
    //Вывод исходной строки
    cout << "Input: " << stroka;
   
    Output(stroka);
    return 0;

}
