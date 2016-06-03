/* 
 * File:   ValueLeaf.h
 * Author: istyaseeg
 *
 * Created on 3. Juni 2016, 11:24
 */

#ifndef VALUELEAF_H
#define	VALUELEAF_H

#include "OperatorComponent.h"

class ValueLeaf : public OperatorComponent {
public:
    ValueLeaf(double);
    virtual ~ValueLeaf();
    char getOp();
    double evaluate(double, double);
    
private:

};

#endif	/* VALUELEAF_H */

