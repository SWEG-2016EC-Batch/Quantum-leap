#include <iostream>
using namespace std;

int main() {
    int userOption, customChoice;

    cout << "Hello! Welcome to the Number Pattern Generator!\n";
    cout << "Below are the options available for creating different patterns:\n";
    cout << "1: 5x5 square with numbers\n";
    cout << "2: 4x6 alphabet box\n";
    cout << "3: Left-bottom triangle with numbers\n";
    cout << "4: Right-bottom triangle with numbers\n";
    cout << "5: Left-bottom triangle with letters\n";
    cout << "6: 5x5 square with lowercase letters\n";
    cout << "7: 7x7 hollow box\n";
    cout << "8: Inverted left-bottom triangle\n";
    cout << "9: Hollow inverted left-bottom triangle\n";
    cout << "10: Full pyramid\n";
    cout << "11: Inverted full pyramid\n";
    cout << "12: Hollow full pyramid\n\n";

    while (true) {
        cout << "Please enter the number of your pattern choice (1-12): ";
        cin >> userOption;

        if (userOption<1 || userOption>12) {
            cout << "Invalid choice. Please select a valid option.\n";
            continue;
        }

        cout << "Do you want to customize the pattern? (0 for Yes, any other number for No): ";
        cin >> customChoice;

        if (customChoice != 0) {
            switch (userOption) {
                case 1:
                    for (int row = 0; row < 5; ++row) {
                        for (int col = 0; col < 5; ++col) {
                            cout << col + 1 << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 2:
                    for (int row = 0; row < 4; ++row) {
                        for (int col = 0; col < 6; ++col) {
                            cout << char('A' + col + row * 6) << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 3:
                    for (int row = 0; row < 5; ++row) {
                        for (int col = 0; col <= row; ++col) {
                            cout << col + 1 << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 4:
                    for (int row = 0; row < 5; ++row) {
                        for (int space = 0; space < 4 - row; ++space) {
                            cout << "  ";
                        }
                        for (int col = row; col >= 0; --col) {
                            cout << col + 1 << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 5:
                    for (int row = 0; row < 5; ++row) {
                        for (int col = 0; col <= row; ++col) {
                            cout << char('A' + col) << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 6:
                    for (int row = 0; row < 5; ++row) {
                        for (int col = 0; col < 5; ++col) {
                            cout << char('a' + col) << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 7:
                    for (int row = 0; row < 7; ++row) {
                        for (int col = 0; col < 7; ++col) {
                            if (row == 0 || row == 6 || col == 0 || col == 6) {
                                cout << "* ";
                            } else {
                                cout << "  ";
                            }
                        }
                        cout << endl;
                    }
                    break;
                case 8:
                    for (int row = 0; row < 6; ++row) {
                        for (int col = 0; col < 6 - row; ++col) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                case 9:
                    for (int row = 0; row < 6; ++row) {
                        for (int col = 0; col < 6 - row; ++col) {
                            if (row == 0 || col == 0 || col == 5 - row) {
                                cout << "* ";
                            } else {
                                cout << "  ";
                            }
                        }
                        cout << endl;
                    }
                    break;
                case 10:
                    for (int row = 0; row < 6; ++row) {
                        for (int space = 0; space < 5 - row; ++space) {
                            cout << " ";
                        }
                        for (int col = 0; col <= row; ++col) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                case 11:
                    for (int row = 0; row < 6; ++row) {
                        for (int space = 0; space < row; ++space) {
                            cout << " ";
                        }
                        for (int col = 0; col < 6 - row; ++col) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    break;
                case 12:
                    for (int row = 0; row < 6; ++row) {
                        for (int space = 0; space < 5 - row; ++space) {
                            cout << " ";
                        }
                        for (int col = 0; col <= row; ++col) {
                            if (row == 5 || col == 0 || col == row) {
                                cout << "* ";
                            } else {
                                cout << "  ";
                            }
                        }
                        cout << endl;
                    }
                    break;
            }
        } else {
            int height, width;
            cout << "Custom Pattern Selected!\nEnter the height of your pattern: ";
            cin >> height;
            if (userOption == 1 || userOption == 2 || userOption == 6 || userOption == 7) {
                cout << "Enter the width of your pattern: ";
                cin >> width;
            }

            switch (userOption) {
                case 1:
                    for (int row = 0; row < height; ++row) {
                        for (int col = 0; col < width; ++col) {
                            cout << col + 1 << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 2:
                    for (int row = 0; row < height; ++row) {
                        for (int col = 0; col < width; ++col) {
                            cout << char('A' + col + row * width) << " ";
                        }
                        cout << endl;
                    }
                    break;
            }
        }

        break;
    }

    return 0;
}
