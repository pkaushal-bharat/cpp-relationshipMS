/********************
 * <copyright information>
 * AUTHOR: PRAKASH (prakasa) Kaushal
 * COURSE: DS&A, OOPS
 * INSTRUCTOR: Shweta, Dhirendra
 * DATED: 26 July 2022
 * REVISIONS: 26 July 2022
 * FILE: rms_main.cpp
 * DESC: Contains the main function that runs the entire project
 ********************/
#include <iostream>
#include <string>
#include "rms.h"

int main(int argc, char *argv[]) {

    if (argc > 1) {
        std::cout << "Application does not take arguments." << std::endl;
        return -1;
    } // end if argc > 1

    // DEBUG mode only enabled if compiled with -DDEBUG flag
    #ifdef DEBUG
    {
        std::cout << "********************\n";
        std::cout << "**   DEBUG MODE   **\n";
    }
    #endif // end ifdef DEBUG

    std::cout << "********************\n";
    std::cout << "Welcome User!\n";
    std::cout << "This is Relation Management System !\n";
    std::cout << "--------------------\n";
    run_program();
    std::cout << "--------------------\n";
    std::cout << "App terminated\n";
    std::cout << "********************\n";
    return 0;
}
