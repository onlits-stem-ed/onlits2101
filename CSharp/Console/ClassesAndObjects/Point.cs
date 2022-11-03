using System;

class Point
{
    float x;
    float y;

    public Point()                      //Default constructor
    {

    }

    public Point(int x, int y)         //Parameterized constructor
    {
        this.x = x;
        this.y = y;
    }

    public Point Add(Point x)
    {
        Point t = new Point();
        t.x = this.x + x.x;
        t.y = this.y + x.y;
        return t;
    }

    public void getPoint()
    {
        Console.WriteLine("({0}, {1})", x, y);
    }
}

class Program
{
    static void Main()
    {
        Point p = new Point(10, 20);
        Point q = new Point(15, 20);
        Point s;
        // s = p + q;  //error  -   Can work if operator overloading is supported by the language
        s = p.Add(q);
        Console.Write("The sum is: ");
        s.getPoint();
    }
}