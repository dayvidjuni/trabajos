#include <iostream>
#include <map>

int main() {
    int h, w;
    std::cin >> h >> w;

    std::map<int, int> bodega;
    for (int i = 0; i < h * w; i++) {
        int objeto;
        std::cin >> objeto;
        if (bodega.find(objeto) == bodega.end())
            bodega[objeto] = 1;
        else
            bodega[objeto]++;
    }

    for (const auto& par : bodega)
        std::cout << par.second << ' ';
    
    std::cout << std::endl;
    return 0;
}