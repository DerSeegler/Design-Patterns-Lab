/* 
 * File:   OperatorCompositor.cpp
 * Author: istyaseeg
 * 
 * Created on 3. Juni 2016, 11:20
 */

#include "OperatorComponent.h"
#include <iostream>
#include <stdio.h>
using namespace std;

OperatorComponent::OperatorComponent(OperatorComponent *left, OperatorComponent *right) {
    leftChild = left;
    rightChild = right;
    this->value=0.0;
}

OperatorComponent::OperatorComponent(double value) {
    this->value = value;
}

OperatorComponent::~OperatorComponent() {
}

double OperatorComponent::traverse() {
    if(leftChild){
        leftChild->traverse();
        rightChild->traverse();
        return this->evaluate(leftChild->value, rightChild->value);
    }else{
        return value;
    }
}

double OperatorComponent::print() {
    if(leftChild){
        printf("(");
        leftChild->print();
        printf("%c", this->getOp());
        rightChild->print();
        printf(")");
    }else{
        return printf("%.f", this->value);
    }
}



