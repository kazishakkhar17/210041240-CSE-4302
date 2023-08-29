#include<iostream>
using namespace std;
class Flight
{
    private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;

    public:
    Flight(int flight_num=0,string dest="",float dist=0.0,float maxF=0.0)
    {
        flightNumber=flight_num;
        destination=dest;
        distance=dist;
        maxFuelCapacity=maxF;

    }
    float CalFuel()
    {
        float fuel;
        if(distance<1000||distance==1000)
        {
            fuel=500;
        }
        else if(distance>1000||distance<2000)
        {
            fuel=1100;
        }
        else if(distance>2000)
        {
            fuel=2200;
        }
        return fuel;
    }
    void ShowInfo()
    {
        cout<<"Flight Number="<<flightNumber<<endl;;
        cout<<"Destination= "<<destination<<endl;
        cout<<"Distance :"<<distance<<endl;
        cout<<"Max fuel capacity="<<maxFuelCapacity<<endl;
        float a= CalFuel();
       // Calfuel();
       // float f=fuel;
        if(maxFuelCapacity==a||maxFuelCapacity>a)
        {
            cout<<"Fuel capacity appropriate"<<endl;
        }
        else{
            cout<<"Fuel capacity is inappropriate"<<endl;
        }
    }
    ~Flight()
    {
        cout<<"flight object has been destroyed"<<endl;
    }


};

int main()
{   
    Flight Flight(1234,"Chittagong",600,500);
    Flight.CalFuel();
    Flight.ShowInfo();
    return 0;

}