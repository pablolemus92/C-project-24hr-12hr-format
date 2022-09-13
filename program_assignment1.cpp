#include <iostream>
#include <string>

using namespace std;
class Time
{
private:
    int hour, int min, int sec;
    bool PM;
public:
    int Hours24();
    int Hours12();
    bool AM();
    bool PM();
    int Minutes();
    int Seconds();
    string ToString24();
    string ToString12();
    Time Add(int hours, int minutes, int seconds);
    void AddTo(int hours, int minutes, int seconds);
    Time(int hours, int minutes, int seconds, bool AM);
};

Time :: Time(int hr, int min, int sec, bool pm)
{
    hour = hr;
    mins = min;
    secs = sec;
    PM = pm;
}

int Time :: Hours24()
{
    if(PM == true)
    {
        hour = hour + 12;
    }
    return hours;
}
int Time:: Hours12()
{
    if(hours > 12)
    {
        hours = hours - 12;
    }
    return hours;
}

bool Time :: AM()
{
    return !pm;
}
bool Time :: PM()
{
    return pm;
}

int Time :: Seconds()
{
    if(sec >= 0 && < 59)
    {
        return sec;
    }
    return -1;

}
int Time :: Minutes()
{

    if(min >= 0 && < 60);
    {
        return min;
    }
    return -1;
}

string Time :: ToString24()
{
    string str;
        str = hours +':' minutes +':' seconds;
    return str;
}
string Time :: ToString12()
{
    string str;
        str+= to_string(hours) +':' to_string(minutes) +':' to_string(seconds);

        if (AM() == true)
            str+=AM;
        else
            str+=PM;
    return str;
}

Time :: Add(int hours, int minutes, int seconds)
{
    Time x;
    x.hour = hours;
    x.minute = minutes;
    x.second = seconds;

    return x;
}

void Time :: AddTo
{
    sec++;
    if(sec >= 60)
    {
        sec -= 60;
        min++;
    }
    if(min >= 60)
    {
        min - 60;
        hour++;
    }
    if(hour >= 24)
    {
        hrs -= 24;
    }
}

int main()
{
    Time clock (5, 0, 0, true);


    cout << clock.Hours12();
    return 0;
}
