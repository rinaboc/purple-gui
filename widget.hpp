#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "graphics.hpp"
#include <string>

class Window;

class Widget
{
protected:
    Window* _w;
    int _x, _y, _sizex, _sizey;
    std::string _title;
    bool _in_focus;
    const int _selection_line = 1;
public:
    Widget(Window*, int, int, int, int, std::string);

    virtual void draw() = 0;
    void title_draw();
    void toggle_focus(){_in_focus = !_in_focus;}
    virtual bool is_over(int, int);
    virtual void logic(genv::event&) = 0;
    bool is_in_focus(){return _in_focus;}
    int get_y(){return _y;}

};

#endif // WIDGET_HPP
