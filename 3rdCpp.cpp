#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main()
{
  float a,b,c;
    cout<<"Bahu a"<<endl;
    cin>>a;
    cout<<"Bahu b"<<endl;
    cin>>b;
    cout<<"Bahu c"<<endl;
    cin>>c;

    float A=acos((b*b+c*c-a*a)/(2*b*c));
    float B=acos((a*a+c*c-b*b)/(2*a*c));
    float C=acos((a*a+b*b-c*c)/(2*a*b));

    float const pai=3.1416;
     A=A*180/pai;
     B=B*180/pai;
     C=C*180/pai;

    cout<<"Kon A B C = ";
    cout<<A<<" "<<B<<" "<<C;

    return EXIT_SUCCESS;


}

