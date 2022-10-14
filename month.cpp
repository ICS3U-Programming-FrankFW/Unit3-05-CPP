//!/ usr / bin / zsh
//Created by : Frankie fox
//Created on : Oct 14, 2022

#include <iostream>

int main(){
    // declare variables
    int userMonth;

    // ask the user for the month
    std::cout << "Enter the number for a month (i.e 4 for April ): ";
    std::cin >> userMonth;


    // state the month selected as a string 
    switch(userMonth) {
        case 1 :
            std::cout << userMonth << " represents January.\n";
            break;
            case 2 :
                std::cout << userMonth << " represents February.\n";
                break;
                case 3 :
                    std::cout << userMonth << "represents March.\n";
                    break;
                    case 4 :
                        std::cout << userMonth << "represents April.\n";
                        break;
                        case 5 :
                            std::cout << userMonth << "represents May.\n";
                            break;
                            case 6 :
                                std::cout << userMonth << "represents June.\n";
                                break;
                                case 7 :
                                    std::cout << userMonth << "represents July.\n";
                                    break;
                                    case 8 :
                                        std::cout << userMonth << "represents August.\n";
                                        break;
                                        case 9 :
                                            std::cout << userMonth << "represents September.\n";
                                            break;
                                            case 10 :
                                                std::cout << userMonth << "represents October.\n";
                                                break;
                                                case 11 :
                                                    std::cout << userMonth << "represents November.\n";
                                                    break;
                                                    case 12 :
                                                        std::cout << userMonth << "represents December./n";
                                                        break;

                                                        // handle the error case 
                                                        default:
                                                            std::cout << "Error." << userMonth << "does not represent a month.\n";
    }
}