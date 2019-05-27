#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
int main(){
    srand(time(nullptr));
 
    for(int i=0;i<10;i++){
        int x=rand();
        std::cout<<std::dec << x <<" - "<<std::hex<<x<< "\n";
    }
    return 0;
}
