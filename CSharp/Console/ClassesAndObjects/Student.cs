using System;

class Student
{
    int roll_number;
    string name;
    string department;
    string course;
    int yearOfJoining;

    Student[] students = new students[450];
    int size = 0;

    void Read(int roll_number, string name, string department, string course, int yearOfJoining)
    {
        this.roll_number = roll_number;
        this.name = name;
        this.department = department;
        this.course = course;
        this.yearOfJoining = yearOfJoining;
        size++;
    }

    void DisplayStudentOfYear(int year)
    {
        for(int i=0; i<size; i++)
        {
            Console.WriteLine("{0}\t{1}\t{2}\t{3}\t{4}");
        }
    }

    void DispalyStudentWithRollNo(int roll_number)
    {
        Console.WriteLine("{0}\t{1}\t{2}\t{3}\t{4}");
    }

    static void Main()
    {
        students[0].Read(1, "Himanshu Kumar", "Computer Science", "BCA", 2021);
    }
}