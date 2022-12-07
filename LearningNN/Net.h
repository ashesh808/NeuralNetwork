/*
 * Description: The header file for Net class
 * Author: Ashesh Nepal
 */

/** @file Net.h */
#ifndef _NET
#define _NET

class Net
{
private:
    int neurons;
    int layers;

public:
    /** Default constructor.
     @pre  None.
     @post a people object with default values is created.
     @return  None.
    **/
    Net();

    /** Parameterized constructor.
      @pre  None.
      @post a person object with the given parameter values is created.
      @param personName  The name of the people object.
      @param personBirthday  The birthday of people object.
      @return  none.
    **/
    Net(int layers, int neurons);

    // Methods for training the Neural Network

    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void feedForward(int inputVals);

    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void backProp(int targetVals);

    // Results
    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void getResults(int resultVals);
};

#include "Net.cpp"
#endif
