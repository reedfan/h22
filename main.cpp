#include <iostream>
using namespace std;

void func1();
void func2();
void func3();
void func4();
void func5();
void func6();
void func7();
void func8();
void func9();
void exchange1(int x,int y);
void func10();


void fun1();


int main() {
  //  func1();
//    func2();
 //   func3();
 // func4();
  //func5();
//  func6();
//func7();
//func8();
 // func9();
 func10();
}

void func1(){
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


void func2(){
    // 一个带有 5 行 2 列的数组
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};

    // 输出数组中每个元素的值
    for ( int i = 0; i < 5; i++ )
        for ( int j = 0; j < 2; j++ )
        {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j]<< endl;
        }
}



void func3(){
    int  var1;
    char var2[10];

    cout << "var1 变量的地址： ";
    cout << &var1 << endl;

    cout << "var2 变量的地址： ";
    cout << &var2 << endl;

}

/*
 * 这是一个生活中的例子：比如说你要 我借给你一本书，我到了你宿舍，但是你人不在宿舍，
 * 于是我把书放在你的2层3号的书架上，并写了一 张纸条放在你的桌上。纸条上写着：你要的书在第2层3号的书架上。
 * 当你回来时，看到这张纸条。你就 知道了我借与你的书放在哪了。你想想看，这张纸条的作用，纸条本身不是书，
 * 它上面也没有放着书。 那么你又如何知道书的位置呢？因为纸条上写着书的位置嘛！其实这张纸条就是一个指针了。
 * 它上面的 内容不是书本身，而是书的地址，你通过纸条这个指针找到了我借给你的本书
 */

void func4(){
    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明  *pi：pi内容所指的地址的内容

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

void func5(){
    int a,*pa;
    a=10;
    pa=&a;    //取a的地址赋值给pa
    cout<<pa<<endl;
    *pa=20;
    cout<<a<<endl;
}





void func6(){
    // 带有 5 个元素的双精度浮点型数组
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;    //数组名赋值给指针

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

    cout<<"..................................."<<endl;
    for ( int i = 0; i < 5; i++ ){
        cout<<*p<<endl;
        p++;
    }


}

void func7(){
    int nArray[3] = { 1, 2, 3 };   // 定义一个数组
    int* pIndex = nArray;          // 将数组的起始地址赋值给指针pIndex
    cout<<"指针指向的地址是："<<pIndex<<endl;       // 输出指针指向的地址
    cout<<"指针所指向的数据的值是："<<*pIndex<<endl; // 输出这个位置上的数据

    pIndex++;   // 对指针进行加运算，使其指向数组中的下一个值
    cout<<"指针指向的地址是："<<pIndex<<endl;        // 输出指针指向的地址
    cout<<"指针所指向的数据的值是："<<*pIndex<<endl;  // 输出数据

}

void func8(){
    int i, a[]={3,4,5,6,7,3,7,4,4,6};
    int * const pa=a;//注意const的位置：不是 const int * pa，
    for (i=0;i<=9;i++)
    {
        cout<<*pa<<endl;
      //  pa++ ;　 //注意这里，指针值被修改
    }
}


void func9(){
    int a=4,b=6;
    exchange1(a,b);
    cout<<a<<"------"<<b<<endl;
    fun1();

}
void exchange1(int x,int y){
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
    cout<<x<<"------"<<y<<endl;
}
/*
 * Exchg1(a,b)时所完成的操作代码如下所示。
int x=a;//←
int y=b;//←注意这里，头两行是调用函数时的隐含操作
int tmp;
tmp=x;
x=y;
y=tmp;
 */

void fun1(){
    int a=4;

    int x;

    x=a;

    x=x+3;
    cout<<a<<"........."<<x<<endl;

}

void func10(){
    short int i;

    char a;

    short int *pi;


}

