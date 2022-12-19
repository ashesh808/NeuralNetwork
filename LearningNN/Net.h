/*
 * Description: The header file for Net class
 * Author: Ashesh Nepal
 */

/** @file Net.h */
#ifndef _NET
#define _NET
#include <iostream>
#include <vector>
#include "Neuron.h"
using namespace std;


typedef vector<Neuron> Layer;

class Net
{
private:
    vector<Layer> m_layers;
    //m_layers[layerNums][neuronNums]

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
    Net(const vector<unsigned> &topology);

    // Methods for training the Neural Network

    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void feedForward(const vector<double> &inputVals);

    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void backProp(const vector<double> &targetVals);

    // Results
    /** Parameterized constructor.
     @pre  None.
     @post a person object with the given parameter values is created.
     @param personName  The name of the people object.
     @param personBirthday  The birthday of people object.
     @return  none.
   **/
    void getResults(vector<double> &resultVals) const;
};

#include "Net.cpp"
#endif
