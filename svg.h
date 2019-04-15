#pragma once 

#include <vector> 
#include <iostream> 

using namespace std; 

void svg_begin( double width, double height ); 
void svg_end(); 
void svg_text( double left, double baseline, string text ); 
void svg_rect( double x, double y, double width, double height, 
string stroke, string color ); 
void show_histogram_svg( const vector<size_t>& bins );