#include <RTClib.h>
#include <Wire.h>

#define p20 18
#define pcheck 17
#define p40 16
#define p60 4
#define pcheck1 13
#define p80 27
#define p90 33
#define p100 32

// int set_Sec, set_Minute, set_Hour, set_Day, set_Month, set_Year;

char daysOfWeek[7][12] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"};

RTC_DS1307 rtc;

const int relay = 26;
const int relay1 = 23;

int f_check_out = 3;

int morning_attempt = 0;
int morning_1_attempt = 0;
int evening_attempt = 0;

void setup()
{
    Serial.begin(115200); /*Set the baudrate to 115200*/
    delay(1000);
    pinMode(relay, OUTPUT);

    pinMode(p20, INPUT_PULLUP);
    pinMode(pcheck, INPUT_PULLUP);
    pinMode(p40, INPUT_PULLUP);
    pinMode(p60, INPUT_PULLUP);
    pinMode(pcheck1, INPUT_PULLUP);
    pinMode(p80, INPUT_PULLUP);
    pinMode(p90, INPUT_PULLUP);
    pinMode(p100, INPUT_PULLUP);

    Wire.begin()
        RTC.begin()
}

void check(var)
{
    delay(120);
    int chck = digitalRead(var);
    if (chck == 1)
    {
        Serial.println("Paani aara hai!");
    }
    else if (chck == 0)
    {
        Serial.println("Paani nhi aara to band krra motor ko.");
        digitalWrite(relay, LOW);
        check_out = 0;
    }
    else
    {
        Serial.println("Kuch to gadbad hai daya!");
    }
}

void attempt(a)
{
    a++;
    delay(600);
    digitalWrite(relay, HIGH);
    first_check();
    if (a == 2)
    {
        break;
    }
    if (f_check_out == 0)
    {
        attempt(a);
    }
}

void morning()
{
    digitalWrite(relay, HIGH);
    check(pcheck);
    if (check_out == 0)
    {
        delay(600);
    }
}

void morning_1()
{
}

void evening()
{
}

void loop()
{
    DateTime now = RTC.now() if (now.hour() >= 5)
    {
        morning();
    }
    digitalWrite(relay, HIGH);
}
