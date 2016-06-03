/* 
 * File:   OperatorPlus.cpp
 * Author: istyaseeg
 * 
 * Created on 3. Juni 2016, 11:20
 */

#include "OperatorPlusComposite.h"

OperatorPlusComposite::OperatorPlusComposite(OperatorComponent *l, OperatorComponent *r) : OperatorComponent(l,r) {
}

OperatorPlusComposite::~OperatorPlusComposite() {
}


char OperatorPlusComposite::getOp() {
    return '+';
}

double OperatorPlusComposite::evaluate(double leftValue, double rightValue) {
    this->value = leftValue + rightValue;
    return this->value;
}