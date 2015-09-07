/*
The MIT License
Copyright (c) 2015 UCSC Autonomous Systems Lab
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include <vector>
#include <math.h>

#include <ogdf/basic/GraphAttributes.h>
#include <ogdf/fileformats/GraphIO.h>

#include "Dubins.h"


/**
 * Calculate euclidean distance from the configuration to the node.
 */
double euclideanDistanceToNode(ogdf::Graph G, ogdf::GraphAttributes GA, configuration_t C, ogdf::node node) {
    double x = GA.x(node);
    double y = GA.y(node);
    ogdf::DPoint uPoint = ogdf::DPoint(x,y);
    return C.position.distance(uPoint);
    //return sqrt(pow(u_x - v_x,2) + pow(u_y - v_y,2));
}

/**
 * Calculate the shortest Dubins' path distance to the node.
 */
double dubinsDistanceToNode(ogdf::Graph G, ogdf::GraphAttributes GA, configuration_t C, ogdf::node node) {
    return 0.0f;
}
