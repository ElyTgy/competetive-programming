#include <string>
using namespace std;

string timeConversion(string s) {
    char ampm = s[s.length() - 2];
    std::string hstr = { s[0], s[1] };
    int hour = std::stoi(hstr);

    if (ampm == 'P' && hour != 12) { hour += 12; }
    else if (ampm == 'A' && hour == 12) { hour = 0; }

    string newhstr = std::to_string(hour);
    if (newhstr.length() == 1) { newhstr = "0" + newhstr; }

    s[0] = newhstr[0];
    s[1] = newhstr[1];

    return s.substr(0, 8);
}