#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
main()
{
//2 ti songkhar jogfol o biogfol nirnoy
int cholok1=89,cholok2=56,jogfol,biogfol,cholok3,cholok4,jogfol2,biogfol2;

    jogfol=89+56;
    biogfol=89-56;

    cout<<"Jogfol= "<<jogfol<<endl<<"Biogfol= "<<biogfol<<endl<<endl;


    //celcious theke farenheight

    float CelciousTapmatra1=30,FarenheightTapmatra1;

    FarenheightTapmatra1=(9*CelciousTapmatra1/5)+32;

    cout<<"Farenheight Tapmatra= "<<FarenheightTapmatra1<<endl<<endl;

    //farenheight theke celcious


    float CelciousTapmatra2,FarenheightTapmatra2=76;

    CelciousTapmatra2= 5*(FarenheightTapmatra2-32)/9;

    cout<<"Celcious Tapmatra= "<<CelciousTapmatra2<<endl<<endl;



    cin>>cholok3>>cholok4;
    jogfol2=abs(cholok3+cholok4);
    cout<<"Ditio Jogfol ="<<jogfol2<<endl<<endl;

    biogfol2=abs(cholok3-cholok4);
    cout<<"Ditio Biogfol ="<<biogfol2<<endl<<endl;

    float vuj1,koti1,vuj2,koti2,durotto;

    cout<<"Prothom Bindur vuj o koti :"<<endl;
    cin>>vuj1>>koti1;
    cout<<"Ditiyo bindur vuj o koti :"<<endl;
    cin>>vuj2>>koti2;
    durotto=sqrt(abs((vuj1-vuj2)*(vuj1-vuj2))+abs((koti1-koti2)*(koti1-koti2)));
    cout<<"Bindu dutir durotto: "<<durotto<<endl;

    return EXIT_SUCCESS;

}
