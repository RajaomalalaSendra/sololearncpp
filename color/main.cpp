#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv)
{
    cout << "\033[2;31mbold red text\033[31m\n";
    cout << "\033[4;33mYellow\033[33m";
    return 0;
}
/*
List of the change color in linux
black - 30
red - 31
green - 32
brown - 33
blue - 34
magenta - 35
cyan - 36
lightgray - 37
         foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47

reset             0  (everything back to normal)
bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)
bold/bright off  21
underline off    24
inverse off      27
*/