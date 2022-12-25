/*
 * Description: The header file for Neuron class
 * Author: Ashesh Nepal
 */

/** @file Neuron.h */
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