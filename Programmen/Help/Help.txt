#include <iostream>
using namespace std;

int main()
{
    char choice;
    for (;;)
    {
        do
        {
            cout << "Help on:\n";
            cout << "1. if\n";
            cout << "2. switch\n";
            cout << "3. for\n";
            cout << "4. while\n";
            cout << "5. do-while\n";
            cout << "6. break\n";
            cout << "7. continue\n";
            cout << "8. goto\n";
            cout << "Choose one of the paragrathes (\"q\" for the end): ";
            cin >> choice;
            cout << "\n";
        } while (choice < '1' || choice > '8' && choice != 'q');
        if (choice == 'q')
        {
            break;
        }
        switch (choice)
        {
        case '1':
            cout << "Sentence if:\n\n";
            cout << "if(condition) sentence;\n";
            cout << "else sentence;\n";
            break;
        case '2':
            cout << "Sentence switch:\n\n";
            cout << "switch(condition)\n";
            cout << "{\n";
            cout << "\tcase constant:\n";
            cout << "\t\tsentences\n";
            cout << "//...\n";
            cout << "}\n";
            break;
        case '3':
            cout << "Cycle for:\n\n";
            cout << "for(initialization; condition; increment)\n";
            cout << "{\n";
            cout << "\tsentence;\n";
            cout << "}\n";
            break;
        case '4':
            cout << "Cycle while:\n\n";
            cout << "while(condition)\n";
            cout << "{\n";
            cout << "\tsentence;\n";
            cout << "}\n";
            break;
        case '5':
            cout << "Cycle do-while:\n\n";
            cout << "do\n";
            cout << "{\n";
            cout << "\tsentence\n";
            cout << "} while (condition);\n";
            break;
        case '6':
            cout << "Sentence break:\n\n";
            cout << "break;\n";
            break;
        case '7':
            cout << "Sentence continue:\n\n";
            cout << "continue;\n";
            break;
        case '8':
            cout << "Sentence goto:\n\n";
            cout << "goto label;\n";
            break;

        }
    }

    return 0;
}