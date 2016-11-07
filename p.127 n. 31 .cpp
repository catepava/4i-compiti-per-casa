// p. 127 n. 31

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=0;
    string frase;
    cout<<"Qnserire la stringa da ripetere (al posto degli spazi inserire - ): " <<endl;
    cin>> frase;
    cout<<"Questa e' la stringa inserite ripetuta per tre volte: "<<endl;

    for(i=0; i<3; i++)
        {
        cout<< frase <<endl;
        }

}
