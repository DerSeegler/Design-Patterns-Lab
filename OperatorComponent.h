/* 
 * File:   OperatorCompositor.h
 * Author: istyaseeg
 *
 * Created on 3. Juni 2016, 11:20
 */

#ifndef OPERATORCOMPONENT_H
#define	OPERATORCOMPONENT_H

class OperatorComponent {
public:
    OperatorComponent(OperatorComponent *, OperatorComponent* );
    OperatorComponent(double);
    virtual ~OperatorComponent();
    virtual double evaluate(double, double) = 0;
    virtual char getOp() = 0;
    virtual double traverse(void);
    virtual double print(void);
    OperatorComponent *leftChild;
    OperatorComponent *rightChild;
    double value;
private:

};

#endif	/* OPERATORCOMPONENT_H */

