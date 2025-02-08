#include <iostream>
#include "../color.h"

using namespace std;

/**
 * @brief Entry point of the program.
 * 
 * This function demonstrates the usage of various color printing functions.
 * It prints text in different foreground and background colors and then
 * displays a menu.
 * 
 * The following functions are used (examples):
 * - printColor(): Prints text with specified foreground color.
 * - bgPrintColor(): Prints text with specified background color.
 * - displayMenu(): Displays a menu to the user.
 * 
 * The colors used in this example are:
 * - Red
 * - Green
 * - Yellow
 * - Blue
 * - Magenta
 * - Cyan
 * - White (foreground only)
 * 
 * @return int Returns 0 upon successful execution.
 */


// This is how you use the ansi color code from color.h with function (examples)
// you can directly use the color code from color.h without using the function
void printColor(string color, string text) {
    cout << color << text << reset() << endl; // reset() is used to reset the color to default
}

// This is how you use the ansi color code from color.h for background color with function (examples)
// you can directly use the color code from color.h without using the function
void bgPrintColor(string color, string text) {
    cout << color << text << reset() << endl; // reset() is used to reset the color to default
}

// example using color.h making display menu 
void displayMenu() {
    printColor(fgGreen(), "================================================");
    bgPrintColor(bgBlue(), "                     Menu                      ");
    printColor(fgGreen(), "================================================");
    printColor(fgYellow(), "1. Menu 1");
    printColor(fgYellow(), "2. Menu 2");
    printColor(fgYellow(), "3. Menu 3");
    printColor(fgYellow(), "4. Menu 4");
    printColor(fgYellow(), "5. Menu 5");
}


int main() {
    printColor(fgRed(), "Merah");
    printColor(fgGreen(), "Hijau");
    printColor(fgYellow(), "Kuning");
    printColor(fgBlue(), "Biru");
    printColor(fgMagenta(), "Magenta");
    printColor(fgCyan(), "Cyan");
    printColor(fgWhite(), "Putih");

    bgPrintColor(bgRed(), "Merah");
    bgPrintColor(bgGreen(), "Hijau");
    bgPrintColor(bgYellow(), "Kuning");
    bgPrintColor(bgBlue(), "Biru");
    bgPrintColor(bgMagenta(), "Magenta");
    bgPrintColor(bgCyan(), "Cyan");

    // example using color.h directly without function
    cout << fgBrightRed() << "Bright Red" << reset() << endl;
    cout << fgBrightGreen() << "Bright Green" << reset() << endl;
    cout << fgBrightYellow() << "Bright Yellow" << reset() << endl;
    cout << fgBrightBlue() << "Bright Blue" << reset() << endl;
    cout << fgBrightMagenta() << "Bright Magenta" << reset() << endl;
    cout << fgBrightCyan() << "Bright Cyan" << reset() << endl;
    cout << bgBrightRed() << "Bright Red" << reset() << endl;
    cout << bgBrightGreen() << "Bright Green" << reset() << endl;
    cout << bgBrightYellow() << "Bright Yellow" << reset() << endl;

    displayMenu();

    return 0;
}