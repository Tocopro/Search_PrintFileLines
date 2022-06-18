
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


    fstream sonnets, reprint, Line_search, reprint1;
    sonnets.open( (R"(C:\Users\NEAK\Documents\Sonnets\sonnets.txt)"), ios::in);
    reprint.open((R"(C:\Users\NEAK\Documents\Sonnets\reprints.txt)"), ios::out);
    int count = 1;
    string line;
    if (sonnets.is_open())
    {
        while(getline(sonnets, line))
        {
            if(reprint.is_open())
            {
                reprint << " Line Number: " << count << "  " << line << "\n";
                 count += 1;
            }
        }
    }
    sonnets.close();
    reprint.close();

    int number;
    string line1;
    cout << "Enter line Number: ";
    cin >> number;
    reprint1.open(R"(C:\Users\NEAK\Documents\Sonnets\reprints.txt)", ios:: in);
    Line_search.open(R"(C:\Users\NEAK\Documents\Sonnets\Line_search.txt)", ios::out);

        if(reprint1.is_open())
        {
            for(int i = 1; getline(reprint1, line1) && i <= 14; i++)
            {
                if(i == number)
                {
                    cout << line1 << endl;
                    Line_search << line1 << endl;
                }


            }
            reprint1.close();
        } else
            cout << "Cannot Open the File";

    return 0;

}
