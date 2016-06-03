/* 
 * File:   ValueLeaf.cpp
 * Author: istyaseeg
 * 
 * Created on 3. Juni 2016, 11:24
 */

#include "ValueLeaf.h"

ValueLeaf::ValueLeaf(double v) : OperatorComponent(v){
}

ValueLeaf::~ValueLeaf() {
}


double ValueLeaf::evaluate(double l, double r) {
    return this->value;
}

char ValueLeaf::getOp() {
    return '#';
}