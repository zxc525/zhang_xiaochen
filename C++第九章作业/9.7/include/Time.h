#ifndef _TIME_H_
#define _TIME_H_

class Time
{
public:

   Time( int = 0, int = 0, int = 0 );
   void setTime( int, int, int );
   void setHour( int );
   void setMinute( int );
   void setSecond( int );

   int getHour();
   int getMinute();
   int getSecond();
   void tick();
   void printUniversal();
   void printStandard();
private:
   int hour;
   int minute;
   int second;
};
