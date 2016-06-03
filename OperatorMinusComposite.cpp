/* 
 * File:   OperatorMinus.cpp
 * Author: istyaseeg
 * 
 * Created on 3. Juni 2016, 11:21
 */

#include "OperatorMinusComposite.h"

OperatorMinusComposite::OperatorMinusComposite(OperatorComponent *l, OperatorComponent *r) : OperatorComponent(l,r) {
}

OperatorMinusComposite::~OperatorMinusComposite() {
}

char OperatorMinusComposite::getOp() {
    return '-';
}

double OperatorMinusComposite::evaluate(double leftValue, double rightValue) {
    this->value = leftValue - rightValue;
    return this->value;
}