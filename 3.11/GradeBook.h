#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string,string );
    void setCourseName(string );
    string getCourseName();
    void setTeacherName(string);
    string TeacherName();
    void displayMessage();
private:
    string coursName;
    string teacherName;
};
