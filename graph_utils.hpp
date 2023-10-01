#pragma once

class DHL::DHLgraph : public TGraph
{
public:
    using TGraph::TGraph;
    void Swap_xy() { single_point_handler_(&DHLgraph::swap_xy_); }

private:
    //  General functions to act on all points
    void single_point_handler_(void (DHLgraph::*point_handler_)(double &x_point, double &y_point));
    //  Internal functions to act on all points
    void swap_xy_(double &x_point, double &y_point);
};