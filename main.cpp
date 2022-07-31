#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    cout<<"This program is to revise chains in string library"<<endl;

    string one="Ala got ";
    string two="cat";
    string three=one+two;
    cout<<"Adding strings:"<<one<<" and "<<two;
    cout<<endl<<three;

    cout<<endl<<"Changing character size in strings:";
    string phrase="Ala got cat";
    transform(phrase.begin(),phrase.end(),phrase.begin(),::tolower);
    cout<<endl<<"To lowercase:"<<endl<<phrase<<endl;
    transform(phrase.begin(),phrase.end(),phrase.begin(),::toupper);
    cout<<endl<<"To uppercase:"<<endl<<phrase<<endl;

    cout<<endl<<"Finding phrase within a chain:"<<endl;
    string tofind="cat";
    string phrase2="Ala got cat";
    size_t position=phrase2.find(tofind);

    cout<<endl<<"Finding phrase within a chain:"<<endl;

    if(position!=string::npos)
        cout<<"Found on position: "<<position;
    else cout<<"Not found";

    cout<<endl<<"Erasing part of chain:"<<endl;
    string phrase3="Ala got cat";
    phrase3.erase(3,3); //erasing 3 chars from 3rd position
    cout<<endl<<"With erased characters:"<<phrase3<<endl;

    cout<<endl<<"Inserting HEY into chain: Bob the builder:"<<endl;
    string phrase4="Bob the builder";
    phrase4.insert(15," HEY");
    cout<<endl<<phrase4<<endl;

    cout<<endl<<"Replacing part of chain Bob the builder with name tom:"<<endl;
    string phrase5="Bob the builder";
    phrase5.replace(0,3,"Tom");//from which char start replacing, how many chars replace, with what replace
    cout<<endl<<phrase5<<endl;

    cout<<endl<<"Substring from chain: Games people play"<<endl;
    string phrase6="Games people play";
    string newphrase = phrase6.substr(4,7); // Substract 7 chars from 4th
    cout<<endl<<newphrase<<endl;

    cout<<endl<<"Press any key to exit";
    getchar(); getchar();
    return 0;
}
