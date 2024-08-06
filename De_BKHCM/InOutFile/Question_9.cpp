#include <iostream>
#include <string>
#include <sys/stat.h>
#include <cmath>

void stat(const std::string& filename) {
    struct stat fileStat;
    
    if(stat(filename.c_str(), &fileStat) != 0) {
        std::cerr << "Error: Unable to access file " << filename << std::endl;
        return;
    }

    std::string sizeUnits[] = {"B", "KB", "MB", "GB", "TB"};
    double size = fileStat.st_size;
    int unitIndex = 0;
    
    while(size >= 1024 && unitIndex < 4) {
        size /= 1024;
        unitIndex++;
    }
    
    std::cout << "name: " << filename << std::endl;
    std::cout << "size: " << std::round(size) << sizeUnits[unitIndex] << std::endl;
}


int main() {
    // Test 1
    stat("main.exe");

    // Test 2
    // stat("main.obj");

    return 0;
}
