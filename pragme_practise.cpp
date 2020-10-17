#include<iostream>


#pragma startup func1()
#pragma exit func2()

int func1(){
    std::cout<<"this is function 1"<<std::endl;
    return 0;
}

int func2(){
    std::cout<<"this is function 2" <<std::endl;
    return 0;
}

int main(int argc, const char** argv) {
     func1();
     func2();
    std::cout<<"this is main function "<<std::endl;
    return 0;
}


