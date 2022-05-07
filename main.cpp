#include <iostream>
#include <iomanip>
using namespace std;
class fraction
{
    int numerator;
    int denominator;

public:
    fraction() {}
    fraction(int numerator, int denominator);
    string print() const;
    double evaluate() const;
    void reduce();
    fraction operator-(fraction);
    friend ostream &operator<<(ostream &out, fraction &f);
};
int main()
{
    fraction *fr1 = new fraction(0, 3);
    fraction *fr2 = new fraction(1, 3);
    fraction *fr3 = new fraction(2, 3);
    fraction *fr4 = new fraction(3, 3);
    fraction *ft1 = new fraction(0, 5);
    fraction *ft2 = new fraction(1, 5);
    fraction *ft3 = new fraction(2, 5);
    fraction *ft4 = new fraction(3, 5);
    fraction *ft5 = new fraction(4, 5);
    fraction *ft6 = new fraction(5, 5);
    cout << "\t\t\t" << *fr1 << "\t\t\t" << *fr2 << "\t\t\t" << *fr3 << "\t\t\t" << *fr4 << endl;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    fraction fr;
    /*==========1===========*/

    cout << *ft1 << "\t\t";
    fr = *ft1 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft1 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft1 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft1 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    /*===========2==========*/

    cout << *ft2 << "\t\t";
    fr = *ft2 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft2 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft2 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft2 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    /*===========3==========*/

    cout << *ft3 << "\t\t";
    fr = *ft3 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft3 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft3 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft3 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    /*==========4===========*/

    cout << *ft4 << "\t\t";
    fr = *ft4 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t\t";
    fr = *ft4 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft4 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft4 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    /*=========5============*/

    cout << *ft5 << "\t\t";
    fr = *ft5 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft5 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft5 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft5 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    /*=========6============*/

    cout << *ft6 << "\t\t";
    fr = *ft6 - *fr1;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft6 - *fr2;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft6 - *fr3;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t";
    fr = *ft6 - *fr4;
    cout << fr << " =";
    fr.reduce();
    cout << fr << " =  " << fixed << setprecision(2) << fr.evaluate() << "\t" << endl;

    delete fr1;
    delete fr2;
    delete fr3;
    delete fr4;
    delete ft1;
    delete ft2;
    delete ft3;
    delete ft4;
    delete ft5;
    delete ft6;
    return 0;
}
fraction::fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}
string fraction::print() const
{
    int deno = denominator, nume = numerator;
    string num;
    string den;
    if (deno < 0)
    {
        deno = -deno;
        nume = -nume;
    }
    if (denominator == 1)
    {
        num = to_string(numerator);
        return num;
    }
    else
    {

        num = to_string(nume);
        den = to_string(deno);
        num.append("/");
        num.append(den);
        return num;
    }
}
double fraction::evaluate() const
{
    double a, b, equivalent;
    a = numerator;
    b = denominator;
    equivalent = a / b;
    return equivalent;
}
void fraction::reduce()
{
    if (numerator != 0)
    {
        int divident = denominator;
        int divisor = numerator;
        if (numerator > denominator)
        {
            int divident = numerator;
            int divisor = denominator;
            int remiender = divident / divisor;
            while (remiender != 0)
            {
                divident = divisor;
                divisor = remiender;
                remiender = divident / divisor;
            }
        }
        if (divisor != 0)
        {
            numerator = numerator / divisor;
            denominator = denominator / divisor;
        }
    }
}
fraction fraction::operator-(fraction f)
{
    int x, y;
    x = numerator * f.denominator - f.numerator * denominator;
    y = denominator * f.denominator;
    fraction fw(x, y);
    return fw;
}
ostream &operator<<(ostream &out, fraction &f)
{
    string st;
    st = f.print();
    out << st;
    return out;
}