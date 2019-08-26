# include<iostream>
using namespace std;
class distanceFI
{

    int feet , inch;
public:
    distanceFI(int, int);
    distanceFI(distanceFI & d);
    void input();
    void display();
    long distanceInch();
    float distanceFeet();
    void adjust();
    void add(distanceFI);
};

distanceFI :: distanceFI(int f = 0, int i = 0)
{
    feet = f;
    inch = i;
}
distanceFI :: distanceFI(distanceFI &d)
{
    feet = d.feet;
    inch = d.inch;
}

void distanceFI :: input()
{
    cin>>feet>>inch;
    adjust();
}

void distanceFI :: display()
{
    cout<<"distance = " << feet << " - "<< inch;
}

void distanceFI :: adjust()
{
    feet += inch/12;
    inch = inch % 12;
}

inline long distanceFI :: distanceInch()
{

    return long(inch);
}

inline float distanceFI :: distanceFeet()
{
    float f = feet;
    f += inch /12;
    return f;
}

void distanceFI :: add(distanceFI d)
{
    feet += d.feet;
    inch += d.inch;
    adjust();
}

int main()
{
    distanceFI d1,d2;
    d1.input();
    d2.input();
    d1.add(d2);
    d1.display()
    return 0;
}

