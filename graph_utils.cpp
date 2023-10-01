#include "DHL.hpp"

void DHL::DHLgraph::single_point_handler_(void (DHLgraph::*point_handler_)(double &x_point, double &y_point))
{
    for (int i_point = 0; i_point < this->GetN(); i_point++)
    {
        auto current_point_x = GetPointX(i_point);
        auto current_point_y = GetPointY(i_point);
        (this->*point_handler_)(current_point_x, current_point_y);
        this->SetPointX(i_point, current_point_x);
        this->SetPointY(i_point, current_point_y);
    }
}

void DHL::DHLgraph::swap_xy_(double &x_point, double &y_point)
{
    auto memory_point_x = x_point;
    x_point = y_point;
    y_point = memory_point_x;
}