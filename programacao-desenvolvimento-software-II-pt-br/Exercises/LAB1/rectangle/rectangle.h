#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

/*
 * Para suportar valores padr�es. Crie 2 construtores, 1 sem par�metros e outro
 * com par�metros.
 */

class Rectangle{
private:
    float _length;
    float _width;
public:
    Rectangle(float length, float width);
    Rectangle(void);
    void set_length(float length);
    void set_width(float width);
    float get_length();
    float get_width();
    float perimeter(void);
    float area(void);
};


#endif
