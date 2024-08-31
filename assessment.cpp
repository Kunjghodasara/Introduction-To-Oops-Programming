#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class to represent lecture details
class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

public:
    // Constructor to assign initial values
    LectureDetails(string lecturer, string subject, string course, int lectures)
        : lecturerName(lecturer), subjectName(subject), courseName(course), numLectures(lectures) {}

    // Function to display name and lecture details
    void displayDetails() const {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
        cout << "--------------------------" << endl;
    }
};

// Function to add a lecture detail
void addLectureDetails(vector<LectureDetails>& lectures) {
    string lecturer, subject, course;
    int lecturesCount;

    cout << "Enter Lecturer Name: ";
    getline(cin, lecturer);
    cout << "Enter Subject Name: ";
    getline(cin, subject);
    cout << "Enter Course Name: ";
    getline(cin, course);
    cout << "Enter Number of Lectures: ";
    cin >> lecturesCount;
    cin.ignore(); // To consume the newline character left by cin

    lectures.push_back(LectureDetails(lecturer, subject, course, lecturesCount));
}

int main() {
    vector<LectureDetails> lectures;

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for lecture " << i + 1 << ":" << endl;
        addLectureDetails(lectures);
    }

    cout << "Displaying Lecture Details:" << endl;
    for (const auto& lecture : lectures) {
        lecture.displayDetails();
    }

    return 0;
}
