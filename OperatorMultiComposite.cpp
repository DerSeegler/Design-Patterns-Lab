/* 
 * File:   OperatorMulti.cpp
 * Author: istyaseeg
 * 
 * Created on 3. Juni 2016, 11:21
 */

#include "OperatorMultiComposite.h"

OperatorMultiComposite::OperatorMultiComposite(OperatorComponent *l, OperatorComponent *r) : OperatorComponent(l,r) {
}

OperatorMultiComposite::~OperatorMultiComposite() {
}

char OperatorMultiComposite::getOp() {
    return '*';
}



double OperatorMultiComposite::evaluate(double leftValue, double rightValue) {
    this->value = leftValue * rightValue;
    return this->value;
}