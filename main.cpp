#include <iostream>
using namespace std;

void func1();
void func2();
void func3();
void func4();


int main() {
  //  func1();
//    func2();
  //  func3();
  func4();
}

void func1(){
    int  var1;
    char var2[10];

    cout << "var1 变量的地址： ";
    cout << &var1 << endl;

    cout << "var2 变量的地址： ";
    cout << &var2 << endl;

}

void func2(){
    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明

    ip = &var;       // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
}

void func3(){
    int n[ 10 ]; // n 是一个包含 10 个整数的数组

    // 初始化数组元素
    for ( int i = 0; i < 10; i++ )
    {
        n[ i ] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << "Value" << endl;

    // 输出数组中每个元素的值
    for ( int j = 0; j < 10; j++ )
    {
        cout <<  j << "    "<< n[ j ] << endl;
    }

}

void func4(){
    // 带有 5 个元素的双精度浮点型数组
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;

    // 输出数组中每个元素的值
    cout << "使用指针的数组值 " << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    cout << "使用 balance 作为地址的数组值 " << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }
}