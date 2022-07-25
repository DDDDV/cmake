/**
 * 多级目录下的cmake编写,多个源文件
 * 首先新建一个build文件夹
 * 在其中使用命令 cmake ..
 * 会在build目录下生成 makefile文件
 * 在build目录下使用make命令，编译好的文件也在build目录下
 * */

#include<iostream>
#include"src/test.h"
using namespace std;

int main(){
    cout << "这是根目录中的主程序文件" << endl;
    test();
    return 0;
}