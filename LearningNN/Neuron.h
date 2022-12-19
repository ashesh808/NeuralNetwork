/*
 * Description: The header file for Net class
 * Author: Ashesh Nepal
 */

/** @file Net.h */
#ifndef _NEURON
#define _NEURON

struct Connection
{
    double weight;
    double deltaWeight;
};

class Neuron
{
public:
    Neuron(unsigned numofOutputs);

private:
    double m_outputVal;
    vector<Connection> m_outputweights;
};

#include "Neuron.cpp"
#endif