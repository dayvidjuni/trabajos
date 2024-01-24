#include <iostream>

int main(){

    int A, N[100]={};
    std::cin >> A;

    for (int i = 0; i < A; ++i) {

        std::cin >> N[i];
    }
    int k=0;
    for (int i = 0; i < A; ++i) {
        
        for (int j = 0; j < N[i]; ++j) {
            std::cout << "<3";
        }
        std::cout << std::endl;
    }
    
    system("pause");
    return 0;
}