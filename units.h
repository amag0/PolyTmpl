#ifndef UNITS_H
#define UNITS_H

#include <string>

typedef uint32_t dim_t;
// 4 bits for each of the seven base units power from +7 to -8.
// length, mass, time, electric current, temperature, substance, luminouse intensity, (angle)
// in engineering only length, mass, time, temperature, angle will be used.

// maybe... just may be I can use fractions like m^2/3 aunque no tiene ningún sentido, lo utilizan
// en tolerancia al daño. 4 unidades x 4 bits numerador + 4 bits denominador?

// var<double>& convert (const? var<double> &v, const unit& u);

class unit_t{
  private:
    // ---------- member variables  ----------
    string name;
    string label;
    dim_t dimension;
    float factor;
    float offset;
  public:
    // ---------- constructor  ----------
    unit(const char *n, const char *l, dim_t d, float f, float o=0.0f)
        : name(n), label(l), dimension(d), factor(f), offset(o){}
    // ---------- member functions  ----------
    double toSI(double& value) {return value*factor+offset;}
    double fromSI(double& value) {return (value-offset)/factor;}
};

// units for the engineering system
unit_t mm ("millimeter", "mm", 0x1,  0.001f);
unit_t ton("metric ton", "tm", 0x10, 1000.0f);
unit_t sec("second", "s", 0x100, 1.0f);
unit_t dcelsius("Celsius degree", "°C", 1.0f, -273.13f);

// units for the imperial system
unit_t inch("inch", "in", 0x1, 0.0254f, 0.0f);
unit_t poundf("pound force", "lbf", 0xe11, 4.448222f);
unit_t dfahrenheit("Fahrenheit degree", "°R", 5.0/9.0f, 255+10.0/27.0);

// units for the scientific system cgs
unit_t cm("centimeter", "cm", 0x1, 0.01f);
unit_t gram("gram", "g", 0x10, 0.001f);

// units for the FurlongFirkinFortnight
unit_t furlong("furlong", "fur", 0x1, 201.68f);
unit_t firkin("firkin", "fir", 0x10, 40.8233133f);
unit_t fortnight("fortnight", "ftn", 0x100, 1209600.0f);

// units for the Planck System PPP
// unit_t Plength("Planck length", "lp", 0x1,1,616229e-35l);
// unit_t Pmass ("Planck mass", "mp", 0x10, 2.176470e-8fl;
// unit_t Ptime("Planck time", 0x100, 5.39116e-44l);
// necesitan implementar factor como double, float no es suficiente.

#endif