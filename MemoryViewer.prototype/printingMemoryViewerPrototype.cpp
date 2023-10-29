#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <array>
using namespace std;

/**
 * 
 * 
 * Memory Viewer Demo
 * - Demoing the memory viewer
 * - Assigning values and testing if those values are changing in their respective memory
 * - For right now, we are giving it a fixed size until we get the renderer working
 * 
 * Goal for Memory Viewer
 * 1.) Displaying this memory viewer
 * 2.) Once viewer works, and user interaction is enabled
 * 3.) Then apply thread-safety, and allow for parallel processing
 * 4.) Parallel processing allows for simultaneously sending data onto memory viewer
 * 5.) Once integrated, there should be 
 * 
*/

int main(){
    std::array<uint64_t, 65536> memory;
    memory.fill(0);

    memory[0x000] = 0xA9; // We set the first index of thhe memory hehre

    std::cout << "\t";
    int sizeOfRows = 19;
    for (int i = 0; i <= sizeOfRows; i++) {
        std::cout << std::setw(2) << std::hex << i << " ";
    }
    std::cout << std::endl;

    // Print memory values
    for (int row = 0; row < 30; row++){
        // Print row header
        std::cout << std::hex << std::setw(6) << std::setfill('0') << row * 16 << "  ";

        // Print column values
        for (int col = 0; col <= sizeOfRows; col++) { // We pass the size of the rows and columns because we want the alignment to be the same as the rows tabs above
            std::cout << std::hex << std::setw(2) << memory[row * 16 + col] << " ";
        }
        std::cout << "\n";
    }
}