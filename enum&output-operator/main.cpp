#include<iostream>
using namespace std;

enum struct DayOfWeek
{
   Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

enum struct Language
{
   deutsch, english
};

static Language language = Language::english;

ostream& operator<<(ostream&, const DayOfWeek &); // prototype output operator

ostream& operator<<(ostream& out, const DayOfWeek & day)
{
   switch(day)
   {
   case DayOfWeek::Monday:
      switch(language)
      {case(Language::deutsch): return out << "Montag";
       case(Language::english):
       default:                 return out << "Monday";
      }
   case DayOfWeek::Tuesday:
      switch(language)
      {case(Language::deutsch): return out << "Dienstag";
       case(Language::english):
       default:                 return out << "Tuesday";
      }
   case DayOfWeek::Wednesday:
      switch(language)
      {case(Language::deutsch): return out << "Mittwoch";
       case(Language::english):
       default:                 return out << "Wednesday";
      }
   case DayOfWeek::Thursday:
      switch(language)
      {case(Language::deutsch): return out << "Donnerstag";
       case(Language::english):
       default:                 return out << "Thursday";
      }
   case DayOfWeek::Friday:
      switch(language)
      {case(Language::deutsch): return out << "Freitag";
       case(Language::english):
       default:                 return out << "Friday";
      }
   case DayOfWeek::Saturday:
      switch(language)
      {case(Language::deutsch): return out << "Samstag";
       case(Language::english):
       default:                 return out << "Saturday";
      }
   case DayOfWeek::Sunday:
      switch(language)
      {case(Language::deutsch): return out << "Sonntag";
       case(Language::english):
       default:                 return out << "Sunday";
      }
   }
}

int main(void)
{
   language = Language::english;
   DayOfWeek d = DayOfWeek::Wednesday;
   cout << "(a) " << DayOfWeek::Monday << endl
        << "(b) " << DayOfWeek::Tuesday << endl;
   cout << "(c) " << d << endl;
   language = Language::deutsch;
   cout << "(d) " << d << endl;
   cout << "(e) " << DayOfWeek::Tuesday << endl;
   cout << "(f) " << DayOfWeek::Saturday << endl;
   return 0;
}